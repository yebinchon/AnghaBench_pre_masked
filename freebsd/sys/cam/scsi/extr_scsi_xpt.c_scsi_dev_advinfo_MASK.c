
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* path; void* status; } ;
struct ccb_dev_advinfo {int buftype; int flags; int * buf; int bufsiz; int provsiz; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_dev_advinfo cdai; } ;
struct cam_ed {int * ext_inq; int ext_inq_len; int * rcap_buf; int rcap_len; int * physpath; int physpath_len; int * serial_num; int serial_num_len; int * device_id; int device_id_len; } ;
typedef int off_t ;
struct TYPE_5__ {struct cam_ed* device; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,TYPE_2__*,void*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(union ccb *VAR_8)
{
 struct cam_ed *VAR_9;
 struct ccb_dev_advinfo *VAR_10;
 off_t VAR_11;

 FUNC_4(VAR_8->ccb_h.path, VAR_5);
 VAR_8->ccb_h.status = VAR_3;
 VAR_9 = VAR_8->ccb_h.path->device;
 VAR_10 = &VAR_8->cdai;
 switch(VAR_10->buftype) {
 case 129:
  if (VAR_10->flags & VAR_4)
   return;
  VAR_10->provsiz = VAR_9->device_id_len;
  if (VAR_9->device_id_len == 0)
   break;
  VAR_11 = VAR_9->device_id_len;
  if (VAR_10->provsiz > VAR_10->bufsiz)
   VAR_11 = VAR_10->bufsiz;
  FUNC_2(VAR_10->buf, VAR_9->device_id, VAR_11);
  break;
 case 128:
  if (VAR_10->flags & VAR_4)
   return;
  VAR_10->provsiz = VAR_9->serial_num_len;
  if (VAR_9->serial_num_len == 0)
   break;
  VAR_11 = VAR_9->serial_num_len;
  if (VAR_10->provsiz > VAR_10->bufsiz)
   VAR_11 = VAR_10->bufsiz;
  FUNC_2(VAR_10->buf, VAR_9->serial_num, VAR_11);
  break;
 case 131:
  if (VAR_10->flags & VAR_4) {
   if (VAR_9->physpath != ((void*)0)) {
    FUNC_0(VAR_9->physpath, VAR_6);
    VAR_9->physpath = ((void*)0);
    VAR_9->physpath_len = 0;
   }

   if (VAR_10->bufsiz == 0)
    break;
   VAR_9->physpath = FUNC_1(VAR_10->bufsiz, VAR_6, VAR_7);
   if (VAR_9->physpath == ((void*)0)) {
    VAR_8->ccb_h.status = VAR_1;
    return;
   }
   VAR_9->physpath_len = VAR_10->bufsiz;
   FUNC_2(VAR_9->physpath, VAR_10->buf, VAR_10->bufsiz);
  } else {
   VAR_10->provsiz = VAR_9->physpath_len;
   if (VAR_9->physpath_len == 0)
    break;
   VAR_11 = VAR_9->physpath_len;
   if (VAR_10->provsiz > VAR_10->bufsiz)
    VAR_11 = VAR_10->bufsiz;
   FUNC_2(VAR_10->buf, VAR_9->physpath, VAR_11);
  }
  break;
 case 130:
  if (VAR_10->flags & VAR_4) {
   if (VAR_9->rcap_buf != ((void*)0)) {
    FUNC_0(VAR_9->rcap_buf, VAR_6);
    VAR_9->rcap_buf = ((void*)0);
   }

   VAR_9->rcap_len = VAR_10->bufsiz;

   if (VAR_10->bufsiz == 0)
    break;

   VAR_9->rcap_buf = FUNC_1(VAR_10->bufsiz, VAR_6,
        VAR_7);
   if (VAR_9->rcap_buf == ((void*)0)) {
    VAR_8->ccb_h.status = VAR_1;
    return;
   }

   FUNC_2(VAR_9->rcap_buf, VAR_10->buf, VAR_10->bufsiz);
  } else {
   VAR_10->provsiz = VAR_9->rcap_len;
   if (VAR_9->rcap_len == 0)
    break;
   VAR_11 = VAR_9->rcap_len;
   if (VAR_10->provsiz > VAR_10->bufsiz)
    VAR_11 = VAR_10->bufsiz;
   FUNC_2(VAR_10->buf, VAR_9->rcap_buf, VAR_11);
  }
  break;
 case 132:




  if (VAR_10->flags & VAR_4)
   return;
  VAR_10->provsiz = VAR_9->ext_inq_len;
  if (VAR_9->ext_inq_len == 0)
   break;
  VAR_11 = VAR_9->ext_inq_len;
  if (VAR_10->provsiz > VAR_10->bufsiz)
   VAR_11 = VAR_10->bufsiz;
  FUNC_2(VAR_10->buf, VAR_9->ext_inq, VAR_11);
  break;
 default:
  return;
 }
 VAR_8->ccb_h.status = VAR_2;

 if (VAR_10->flags & VAR_4) {
  FUNC_3(VAR_0, VAR_8->ccb_h.path,
     (void *)(uintptr_t)VAR_10->buftype);
 }
}
