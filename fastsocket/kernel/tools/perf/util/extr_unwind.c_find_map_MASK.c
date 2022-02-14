
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word_t ;
struct unwind_info {int machine; int thread; } ;
struct map {int dummy; } ;
struct addr_location {struct map* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct addr_location*) ;

__attribute__((used)) static struct map *FUNC_1(unw_word_t VAR_2, struct unwind_info *VAR_3)
{
 struct addr_location VAR_4;

 FUNC_0(VAR_3->thread, VAR_3->machine, VAR_1,
         VAR_0, VAR_2, &VAR_4);
 return VAR_4.map;
}
