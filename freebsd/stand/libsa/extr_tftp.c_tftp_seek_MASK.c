
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tftp_handle {int off; } ;
struct open_file {struct tftp_handle* f_fsdata; } ;
typedef int off_t ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static off_t
FUNC_0(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
{
 struct tftp_handle *VAR_5;
 VAR_5 = VAR_2->f_fsdata;

 switch (VAR_4) {
 case 128:
  VAR_5->off = VAR_3;
  break;
 case 129:
  VAR_5->off += VAR_3;
  break;
 default:
  VAR_1 = VAR_0;
  return (-1);
 }
 return (VAR_5->off);
}
