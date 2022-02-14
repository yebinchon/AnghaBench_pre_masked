
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct query_cmd {scalar_t__ query_type; scalar_t__ name; } ;


 struct query_cmd* VAR_0 ;

__attribute__((used)) static const struct query_cmd *FUNC_0(uint16_t VAR_1)
{
 const struct query_cmd *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  if (VAR_2->query_type == VAR_1)
   return VAR_2;

 return ((void*)0);
}
