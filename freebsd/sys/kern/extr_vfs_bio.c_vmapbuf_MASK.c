
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
struct buf {scalar_t__ b_bufsize; scalar_t__ b_iocmd; int b_npages; int b_offset; scalar_t__ b_data; scalar_t__ b_kvabase; int b_pages; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int,scalar_t__,int ,int ,int ) ;

int
FUNC_3(struct buf *VAR_8, int VAR_9)
{
 vm_prot_t VAR_10;
 int VAR_11;

 if (VAR_8->b_bufsize < 0)
  return (-1);
 VAR_10 = VAR_3;
 if (VAR_8->b_iocmd == VAR_0)
  VAR_10 |= VAR_4;
 if ((VAR_11 = FUNC_2(&VAR_5->p_vmspace->vm_map,
     (vm_offset_t)VAR_8->b_data, VAR_8->b_bufsize, VAR_10, VAR_8->b_pages,
     FUNC_0(VAR_1))) < 0)
  return (-1);
 VAR_8->b_npages = VAR_11;
 VAR_8->b_offset = ((vm_offset_t)VAR_8->b_data) & VAR_2;
 if (VAR_9 || !VAR_7) {
  FUNC_1((vm_offset_t)VAR_8->b_kvabase, VAR_8->b_pages, VAR_11);
  VAR_8->b_data = VAR_8->b_kvabase + VAR_8->b_offset;
 } else
  VAR_8->b_data = VAR_6;
 return(0);
}
