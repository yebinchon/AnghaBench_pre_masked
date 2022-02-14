
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_info {scalar_t__ address; scalar_t__ end_sequence; } ;
typedef int bfd_boolean ;



__attribute__((used)) static inline bfd_boolean
FUNC_0 (struct line_info *VAR_0, struct line_info *VAR_1)
{
  return (VAR_0->address > VAR_1->address
   || (VAR_0->address == VAR_1->address
       && VAR_0->end_sequence < VAR_1->end_sequence));
}
