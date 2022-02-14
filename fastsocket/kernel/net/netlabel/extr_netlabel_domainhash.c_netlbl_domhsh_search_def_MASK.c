
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_dom_map {int valid; } ;


 int VAR_0 ;
 struct netlbl_dom_map* FUNC_0 (char const*) ;
 struct netlbl_dom_map* FUNC_1 (int ) ;

__attribute__((used)) static struct netlbl_dom_map *FUNC_2(const char *VAR_1)
{
 struct netlbl_dom_map *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 != ((void*)0) && !VAR_2->valid)
   VAR_2 = ((void*)0);
 }

 return VAR_2;
}
