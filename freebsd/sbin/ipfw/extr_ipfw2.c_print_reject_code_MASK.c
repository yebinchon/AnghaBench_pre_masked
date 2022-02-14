
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uint16_t ;
struct buf_pr {int dummy; } ;


 int FUNC_0 (struct buf_pr*,char*,char const*) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char const*) ;

__attribute__((used)) static void
FUNC_2(struct buf_pr *VAR_1, uint16_t VAR_2)
{
 char const *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_2)) != ((void*)0))
  FUNC_0(VAR_1, "unreach %s", VAR_3);
 else
  FUNC_0(VAR_1, "unreach %u", VAR_2);
}
