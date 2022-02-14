
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia_type_to_subtype {int dummy; } ;
struct ifmedia_description {char const* ifmt_string; } ;


 struct ifmedia_description* FUNC_0 (int,struct ifmedia_type_to_subtype*) ;
 struct ifmedia_type_to_subtype* FUNC_1 (int) ;

const char *
FUNC_2(int VAR_0)
{
 struct ifmedia_description *VAR_1;
 struct ifmedia_type_to_subtype *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0, VAR_2);
 return (VAR_1->ifmt_string);
}
