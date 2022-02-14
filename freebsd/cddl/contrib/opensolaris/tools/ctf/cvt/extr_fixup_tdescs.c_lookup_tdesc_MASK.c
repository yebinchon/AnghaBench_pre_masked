
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tdesc_t ;
typedef int tdata_t ;
struct match {char const* member_1; int * m_ret; int * member_0; } ;


 int FUNC_0 (int *,char const*,int ,struct match*) ;
 int VAR_0 ;

__attribute__((used)) static tdesc_t *
FUNC_1(tdata_t *VAR_1, char const *VAR_2)
{
 struct match VAR_3 = { ((void*)0), VAR_2 };
 FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_3);
 return (VAR_3.m_ret);
}
