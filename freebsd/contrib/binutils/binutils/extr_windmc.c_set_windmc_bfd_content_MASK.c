
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_2__ {int sec; int abfd; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,void const*,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (const void *VAR_1, rc_uint_type VAR_2, rc_uint_type VAR_3)
{
  if (! FUNC_1 (VAR_0.abfd, VAR_0.sec, VAR_1, VAR_2, VAR_3))
    FUNC_0 ("bfd_set_section_contents");
}
