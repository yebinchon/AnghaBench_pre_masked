
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nodes; int preferred_node; } ;
struct TYPE_3__ {int user_nodemask; } ;
struct mempolicy {unsigned short flags; unsigned short mode; TYPE_2__ v; TYPE_1__ w; } ;
typedef int nodemask_t ;


 int FUNC_0 () ;
 int VAR_0 ;


 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;

 unsigned short VAR_4 ;
 unsigned short VAR_5 ;

 int FUNC_1 (int) ;
 struct mempolicy VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char** VAR_7 ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

int FUNC_9(char *VAR_8, int VAR_9, struct mempolicy *VAR_10, int VAR_11)
{
 char *VAR_12 = VAR_8;
 int VAR_13;
 nodemask_t VAR_14;
 unsigned short VAR_15;
 unsigned short VAR_16 = VAR_10 ? VAR_10->flags : 0;




 FUNC_1(VAR_9 < FUNC_8("interleave") + FUNC_8("relative") + 16);

 if (!VAR_10 || VAR_10 == &VAR_6)
  VAR_15 = 130;
 else
  VAR_15 = VAR_10->mode;

 switch (VAR_15) {
 case 130:
  FUNC_4(VAR_14);
  break;

 case 128:
  FUNC_4(VAR_14);
  if (VAR_16 & VAR_1)
   VAR_15 = VAR_4;
  else
   FUNC_2(VAR_10->v.preferred_node, VAR_14);
  break;

 case 131:

 case 129:
  if (VAR_11)
   VAR_14 = VAR_10->w.user_nodemask;
  else
   VAR_14 = VAR_10->v.nodes;
  break;

 default:
  FUNC_0();
 }

 VAR_13 = FUNC_8(VAR_7[VAR_15]);
 if (VAR_8 + VAR_9 < VAR_12 + VAR_13 + 1)
  return -VAR_0;

 FUNC_7(VAR_12, VAR_7[VAR_15]);
 VAR_12 += VAR_13;

 if (VAR_16 & VAR_5) {
  if (VAR_8 + VAR_9 < VAR_12 + 2)
   return -VAR_0;
  *VAR_12++ = '=';




  if (VAR_16 & VAR_3)
   VAR_12 += FUNC_6(VAR_12, VAR_8 + VAR_9 - VAR_12, "static");
  else if (VAR_16 & VAR_2)
   VAR_12 += FUNC_6(VAR_12, VAR_8 + VAR_9 - VAR_12, "relative");
 }

 if (!FUNC_5(VAR_14)) {
  if (VAR_8 + VAR_9 < VAR_12 + 2)
   return -VAR_0;
  *VAR_12++ = ':';
   VAR_12 += FUNC_3(VAR_12, VAR_8 + VAR_9 - VAR_12, VAR_14);
 }
 return VAR_12 - VAR_8;
}
