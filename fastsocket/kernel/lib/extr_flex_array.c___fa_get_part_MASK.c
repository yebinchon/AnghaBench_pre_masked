
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {int dummy; } ;
struct flex_array {struct flex_array_part** parts; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct flex_array_part* FUNC_0 (int,int) ;
 int FUNC_1 (struct flex_array_part*,int ,int) ;

__attribute__((used)) static struct flex_array_part *
FUNC_2(struct flex_array *VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct flex_array_part *VAR_5 = VAR_2->parts[VAR_3];
 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof(struct flex_array_part), VAR_4);
  if (!VAR_5)
   return ((void*)0);
  if (!(VAR_4 & VAR_1))
   FUNC_1(VAR_5, VAR_0,
    sizeof(struct flex_array_part));
  VAR_2->parts[VAR_3] = VAR_5;
 }
 return VAR_5;
}
