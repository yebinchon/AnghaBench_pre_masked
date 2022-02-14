
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct section {int dummy; } ;
struct elfcopy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct section* FUNC_0 (struct elfcopy*,char*,char*,int *,int ,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static struct section *
FUNC_4(struct elfcopy *VAR_6, int VAR_7, uint64_t VAR_8,
    uint64_t VAR_9)
{
 char *VAR_10;

 if ((VAR_10 = FUNC_2(VAR_5)) == ((void*)0))
  FUNC_1(VAR_1, "malloc failed");
 FUNC_3(VAR_10, VAR_5, ".sec%d", VAR_7);

 return (FUNC_0(VAR_6, VAR_10, VAR_10, ((void*)0), 0, VAR_8,
  VAR_4, VAR_0, VAR_2 | VAR_3, 1, VAR_9, 0));
}
