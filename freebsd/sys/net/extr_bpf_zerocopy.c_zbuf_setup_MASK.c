
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct zbuf {int zb_uaddr; size_t zb_size; size_t zb_numpages; struct bpf_zbuf_header* zb_header; int ** zb_pages; } ;
struct vm_map {int dummy; } ;
struct thread {TYPE_2__* td_proc; } ;
struct sf_buf {int dummy; } ;
struct bpf_zbuf_header {int dummy; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {struct vm_map vm_map; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct bpf_zbuf_header*,int) ;
 void* FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct zbuf*) ;
 int * FUNC_4 (struct vm_map*,int) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_8, vm_offset_t VAR_9, size_t VAR_10,
    struct zbuf **VAR_11)
{
 struct zbuf *VAR_12;
 struct vm_map *VAR_13;
 int VAR_14, VAR_15;

 *VAR_11 = ((void*)0);




 if (VAR_9 & VAR_6)
  return (VAR_2);




 if (VAR_10 & VAR_6)
  return (VAR_2);




 if ((VAR_10 / VAR_7) > VAR_0)
  return (VAR_2);




 VAR_14 = 0;
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_3, VAR_5 | VAR_4);
 VAR_12->zb_uaddr = VAR_9;
 VAR_12->zb_size = VAR_10;
 VAR_12->zb_numpages = VAR_10 / VAR_7;
 VAR_12->zb_pages = FUNC_1(sizeof(struct sf_buf *) *
     VAR_12->zb_numpages, VAR_3, VAR_5 | VAR_4);
 VAR_13 = &VAR_8->td_proc->p_vmspace->vm_map;
 for (VAR_15 = 0; VAR_15 < VAR_12->zb_numpages; VAR_15++) {
  VAR_12->zb_pages[VAR_15] = FUNC_4(VAR_13,
      VAR_9 + (VAR_15 * VAR_7));
  if (VAR_12->zb_pages[VAR_15] == ((void*)0)) {
   VAR_14 = VAR_1;
   goto error;
  }
 }
 VAR_12->zb_header =
     (struct bpf_zbuf_header *)FUNC_2(VAR_12->zb_pages[0]);
 FUNC_0(VAR_12->zb_header, sizeof(*VAR_12->zb_header));
 *VAR_11 = VAR_12;
 return (0);

error:
 FUNC_3(VAR_12);
 return (VAR_14);
}
