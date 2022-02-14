
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tftp_handle {struct tftp_handle* pkt; struct tftp_handle* path; } ;
struct open_file {struct tftp_handle* f_fsdata; } ;


 int FUNC_0 (struct tftp_handle*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1)
{
 struct tftp_handle *VAR_2;
 VAR_2 = VAR_1->f_fsdata;



 if (VAR_2) {
  FUNC_0(VAR_2->path);
  FUNC_0(VAR_2->pkt);
  FUNC_0(VAR_2);
 }
 VAR_0 = 0;
 return (0);
}
