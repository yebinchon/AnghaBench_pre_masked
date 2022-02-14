
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* expdoc; TYPE_2__* doc; } ;
union node {scalar_t__ type; TYPE_3__ nhere; } ;
struct job {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {char* text; } ;
struct TYPE_5__ {TYPE_1__ narg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int ,int) ;
 scalar_t__ FUNC_4 (struct job*,union node*,int ) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int,char const*,size_t) ;
 int FUNC_10 (int,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(union node *VAR_13)
{
 const char *VAR_14;
 int VAR_15[2];
 size_t VAR_16 = 0;
 int VAR_17;
 ssize_t VAR_18 = 0;

 if (FUNC_5(VAR_15) < 0)
  FUNC_2("Pipe call failed: %s", FUNC_7(VAR_12));

 if (VAR_13->type == VAR_3)
  VAR_14 = VAR_13->nhere.expdoc;
 else
  VAR_14 = VAR_13->nhere.doc->narg.text;
 VAR_16 = FUNC_8(VAR_14);
 if (VAR_16 == 0)
  goto out;
 VAR_17 = FUNC_3(VAR_15[1], VAR_1, 0);
 if (VAR_17 != -1 && FUNC_3(VAR_15[1], VAR_2, VAR_17 | VAR_4) != -1) {
  VAR_18 = FUNC_9(VAR_15[1], VAR_14, VAR_16);
  if (VAR_18 < 0)
   VAR_18 = 0;
  if ((size_t)VAR_18 == VAR_16)
   goto out;
  FUNC_3(VAR_15[1], VAR_2, VAR_17);
 }

 if (FUNC_4((struct job *)((void*)0), (union node *)((void*)0), VAR_0) == 0) {
  FUNC_1(VAR_15[0]);
  FUNC_6(VAR_6, VAR_11);
  FUNC_6(VAR_8, VAR_11);
  FUNC_6(VAR_5, VAR_11);
  FUNC_6(VAR_9, VAR_11);
  FUNC_6(VAR_7, VAR_10);
  FUNC_10(VAR_15[1], VAR_14 + VAR_18, VAR_16 - VAR_18);
  FUNC_0(0);
 }
out:
 FUNC_1(VAR_15[1]);
 return VAR_15[0];
}
