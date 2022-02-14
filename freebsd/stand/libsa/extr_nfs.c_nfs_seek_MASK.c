
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_3__ {int * val; } ;
struct TYPE_4__ {TYPE_1__ fa_size; } ;
struct nfs_iodesc {int off; TYPE_2__ fa; } ;
typedef int off_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;

off_t
FUNC_1(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
{
 struct nfs_iodesc *VAR_5 = (struct nfs_iodesc *)VAR_2->f_fsdata;
 uint32_t VAR_6 = FUNC_0(VAR_5->fa.fa_size.val[1]);

 switch (VAR_4) {
 case 128:
  VAR_5->off = VAR_3;
  break;
 case 130:
  VAR_5->off += VAR_3;
  break;
 case 129:
  VAR_5->off = VAR_6 - VAR_3;
  break;
 default:
  VAR_1 = VAR_0;
  return (-1);
 }

 return (VAR_5->off);
}
