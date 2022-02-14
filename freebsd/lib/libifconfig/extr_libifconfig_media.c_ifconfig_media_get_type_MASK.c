
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia_description {char const* ifmt_string; } ;


 struct ifmedia_description* FUNC_0 (int) ;

const char *
FUNC_1(int VAR_0)
{
 struct ifmedia_description *VAR_1;




 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->ifmt_string == ((void*)0)) {
  return ("<unknown type>");
 } else {
  return (VAR_1->ifmt_string);
 }
}
