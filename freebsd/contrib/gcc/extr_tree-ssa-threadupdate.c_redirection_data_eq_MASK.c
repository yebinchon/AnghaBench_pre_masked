
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirection_data {scalar_t__ outgoing_edge; } ;
typedef scalar_t__ edge ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  edge VAR_2 = ((struct redirection_data *)VAR_0)->outgoing_edge;
  edge VAR_3 = ((struct redirection_data *)VAR_1)->outgoing_edge;

  return VAR_2 == VAR_3;
}
