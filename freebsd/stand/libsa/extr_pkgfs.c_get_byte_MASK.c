
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int avail_in; int* next_in; } ;
struct package {int* pkg_buf; TYPE_1__ pkg_zs; int pkg_fd; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int ) ;

__attribute__((used)) static int
FUNC_1(struct package *VAR_1, off_t *VAR_2)
{
 int VAR_3;

 if (VAR_1->pkg_zs.avail_in == 0) {
  VAR_3 = FUNC_0(VAR_1->pkg_fd, VAR_1->pkg_buf, VAR_0);
  if (VAR_3 <= 0)
   return (-1);
  VAR_1->pkg_zs.avail_in = VAR_3;
  VAR_1->pkg_zs.next_in = VAR_1->pkg_buf;
 }

 VAR_3 = *VAR_1->pkg_zs.next_in;
 VAR_1->pkg_zs.next_in++;
 VAR_1->pkg_zs.avail_in--;
 (*VAR_2)++;
 return (VAR_3);
}
