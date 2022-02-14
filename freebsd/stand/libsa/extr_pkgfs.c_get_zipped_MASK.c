
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t avail_out; int avail_in; int next_in; void* next_out; } ;
struct package {size_t pkg_ofs; TYPE_1__ pkg_zs; int pkg_buf; int pkg_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct package *VAR_6, void *VAR_7, size_t VAR_8)
{
 int VAR_9;

 VAR_6->pkg_zs.next_out = VAR_7;
 VAR_6->pkg_zs.avail_out = VAR_8;

 while (VAR_6->pkg_zs.avail_out) {
  if (VAR_6->pkg_zs.avail_in == 0) {
   VAR_9 = FUNC_1(VAR_6->pkg_fd, VAR_6->pkg_buf, VAR_1);
   if (VAR_9 <= 0) {
    VAR_5 = VAR_0;
    return (-1);
   }
   VAR_6->pkg_zs.avail_in = VAR_9;
   VAR_6->pkg_zs.next_in = VAR_6->pkg_buf;
  }

  VAR_9 = FUNC_0(&VAR_6->pkg_zs, VAR_4);
  if (VAR_9 != VAR_2 && VAR_9 != VAR_3) {
   VAR_5 = VAR_0;
   return (-1);
  }
 }

 VAR_6->pkg_ofs += VAR_8;
 return (0);
}
