
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_ooffset_t ;
struct thread {int td_ucred; } ;
struct md_s {int mediasize; scalar_t__ fwsectors; scalar_t__ fwheads; int flags; int * object; } ;
struct md_req {int md_options; int md_mediasize; scalar_t__ md_fwsectors; scalar_t__ md_fwheads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct md_s*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct md_s *VAR_9, struct md_req *VAR_10, struct thread *VAR_11)
{
 vm_ooffset_t VAR_12;
 int VAR_13;





 if (VAR_9->mediasize <= 0 || (VAR_9->mediasize % VAR_7) != 0)
  return (VAR_0);







 if ((VAR_10->md_options & VAR_5) != 0)
  return (VAR_1);
 VAR_12 = VAR_10->md_mediasize / VAR_7;
 if (VAR_10->md_fwsectors != 0)
  VAR_9->fwsectors = VAR_10->md_fwsectors;
 if (VAR_10->md_fwheads != 0)
  VAR_9->fwheads = VAR_10->md_fwheads;
 VAR_9->object = FUNC_3(VAR_6, ((void*)0), VAR_7 * VAR_12,
     VAR_8, 0, VAR_11->td_ucred);
 if (VAR_9->object == ((void*)0))
  return (VAR_2);
 VAR_9->flags = VAR_10->md_options & (VAR_3 | VAR_4);
 if (VAR_10->md_options & VAR_4) {
  if (FUNC_1(VAR_9->object, 0, VAR_12) < 0) {
   VAR_13 = VAR_0;
   goto finish;
  }
 }
 VAR_13 = FUNC_0(VAR_9, VAR_11->td_ucred);
 finish:
 if (VAR_13 != 0) {
  FUNC_2(VAR_9->object);
  VAR_9->object = ((void*)0);
 }
 return (VAR_13);
}
