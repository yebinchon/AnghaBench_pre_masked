
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
typedef int dummy ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int,int ,int ,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 size_t VAR_7;
 size_t VAR_8;
 const char *VAR_9;
 int VAR_10;

again:
 VAR_10 = FUNC_0(VAR_4, VAR_3, 1, 0, 0, (char *)0,
        &VAR_7, &VAR_8, &VAR_9, 0, sizeof(VAR_9));

 if (VAR_10 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_10 == 0)
     (void) FUNC_1(VAR_6, "done!\n");
 return;
}
