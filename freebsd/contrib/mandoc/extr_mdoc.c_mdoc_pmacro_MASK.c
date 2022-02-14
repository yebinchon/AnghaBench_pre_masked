
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct roff_node {scalar_t__ tok; scalar_t__ type; scalar_t__ end; scalar_t__ sec; TYPE_5__* parent; TYPE_2__* norm; } ;
struct roff_man {struct roff_node* last; scalar_t__ quick; int flags; int mdocmac; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_12__ {int (* fp ) (struct roff_man*,int,int,int,int*,char*) ;} ;
struct TYPE_11__ {scalar_t__ tok; TYPE_4__* norm; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_3__ Bl; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ Bl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char const**,int *,int *) ;
 int FUNC_1 (int ,int,int,char*,...) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,size_t) ;
 int * FUNC_4 (char*,char) ;
 int FUNC_5 (struct roff_man*,int,int,int,int*,char*) ;
 int FUNC_6 (struct roff_man*,int,int,int,int*,char*) ;
 int FUNC_7 (struct roff_man*,int,int,int,int*,char*) ;

__attribute__((used)) static int
FUNC_8(struct roff_man *VAR_12, int VAR_13, char *VAR_14, int VAR_15)
{
 struct roff_node *VAR_16;
 const char *VAR_17;
 size_t VAR_18;
 enum roff_tok VAR_19;
 int VAR_20;



 VAR_20 = VAR_15;
 VAR_19 = VAR_11;
 for (VAR_18 = 0; VAR_18 < 4 && FUNC_4(" \t\\", VAR_14[VAR_15]) == ((void*)0); VAR_18++)
  VAR_15++;
 if (VAR_18 == 2 || VAR_18 == 3)
  VAR_19 = FUNC_3(VAR_12->mdocmac, VAR_14 + VAR_20, VAR_18);
 if (VAR_19 == VAR_11) {
  FUNC_1(VAR_2, VAR_13, VAR_20, "%s", VAR_14 + VAR_20 - 1);
  return 1;
 }



 switch (VAR_14[VAR_15]) {
 case '\\':
  VAR_17 = VAR_14 + VAR_15 + 1;
  FUNC_0(&VAR_17, ((void*)0), ((void*)0));
  VAR_15 = VAR_17 - VAR_14;
  break;
 case '\t':
  VAR_15++;
  break;
 default:
  break;
 }



 while (VAR_14[VAR_15] == ' ')
  VAR_15++;






 if ('\0' == VAR_14[VAR_15] && ' ' == VAR_14[VAR_15 - 1])
  FUNC_1(VAR_3, VAR_13, VAR_15 - 1, ((void*)0));






 VAR_16 = VAR_12->last;
 if (VAR_16 == ((void*)0) || VAR_19 == VAR_7 || VAR_19 == VAR_5) {
  (*FUNC_2(VAR_19)->fp)(VAR_12, VAR_19, VAR_13, VAR_20, &VAR_15, VAR_14);
  return 1;
 }
 if ((VAR_16->tok == VAR_4 && VAR_16->type == VAR_9 &&
      VAR_16->end == VAR_0 && VAR_16->norm->Bl.type == VAR_1) ||
     (VAR_16->parent != ((void*)0) && VAR_16->parent->tok == VAR_4 &&
      VAR_16->parent->norm->Bl.type == VAR_1)) {
  VAR_12->flags |= VAR_6;
  (*FUNC_2(VAR_7)->fp)(VAR_12, VAR_7, VAR_13, VAR_20, &VAR_20, VAR_14);
  return 1;
 }



 (*FUNC_2(VAR_19)->fp)(VAR_12, VAR_19, VAR_13, VAR_20, &VAR_15, VAR_14);



 if (VAR_12->quick && VAR_8 == VAR_19 &&
     VAR_10 != VAR_12->last->sec)
  return 2;

 return 1;
}
