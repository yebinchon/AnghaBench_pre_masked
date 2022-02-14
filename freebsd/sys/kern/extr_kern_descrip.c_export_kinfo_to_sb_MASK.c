
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_file {scalar_t__ kf_structsize; } ;
struct export_fd_buf {int remainder; int sb; struct kinfo_file kif; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct kinfo_file*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct export_fd_buf *VAR_1)
{
 struct kinfo_file *VAR_2;

 VAR_2 = &VAR_1->kif;
 if (VAR_1->remainder != -1) {
  if (VAR_1->remainder < VAR_2->kf_structsize) {

   VAR_1->remainder = 0;
   return (0);
  }
  VAR_1->remainder -= VAR_2->kf_structsize;
 }
 return (FUNC_0(VAR_1->sb, VAR_2, VAR_2->kf_structsize) == 0 ? 0 : VAR_0);
}
