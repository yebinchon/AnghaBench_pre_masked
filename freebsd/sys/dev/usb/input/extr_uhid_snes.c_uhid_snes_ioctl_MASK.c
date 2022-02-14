
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
struct usb_gen_descriptor {int ugd_report_type; int ugd_maxlen; int * ugd_data; int ugd_actlen; } ;
struct usb_fifo {int dummy; } ;
struct uhid_snes_softc {int sc_fid; int sc_fsize; int sc_oid; int sc_osize; int sc_iid; int sc_isize; int sc_mutex; int sc_fflags; int sc_repdesc_ptr; int sc_repdesc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;







 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uhid_snes_softc*,int,int ,int *,int *,int ) ;
 int FUNC_6 (struct uhid_snes_softc*,int,int ,int *,int *,int ) ;
 struct uhid_snes_softc* FUNC_7 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_8(struct usb_fifo *VAR_5, u_long VAR_6, void *VAR_7, int VAR_8)
{
 struct uhid_snes_softc *VAR_9 = FUNC_7(VAR_5);
 struct usb_gen_descriptor *VAR_10;
 uint32_t VAR_11;
 int VAR_12 = 0;
 uint8_t VAR_13;

 switch (VAR_6) {
 case 131:
  VAR_10 = VAR_7;
  if (VAR_9->sc_repdesc_size > VAR_10->ugd_maxlen) {
   VAR_11 = VAR_10->ugd_maxlen;
  } else {
   VAR_11 = VAR_9->sc_repdesc_size;
  }

  VAR_10->ugd_actlen = VAR_11;
  if (VAR_10->ugd_data == ((void*)0))
   break;
  VAR_12 = FUNC_1(VAR_9->sc_repdesc_ptr, VAR_10->ugd_data, VAR_11);
  break;

 case 129:
  if (!(VAR_8 & VAR_2)) {
   VAR_12 = VAR_1;
   break;
  }

  if (*(int *)VAR_7) {

   VAR_12 = FUNC_5(VAR_9, 134,
       VAR_9->sc_iid, ((void*)0), ((void*)0), VAR_9->sc_isize);
   if (VAR_12) {
    break;
   }
   FUNC_3(&VAR_9->sc_mutex);
   VAR_9->sc_fflags |= VAR_4;
   FUNC_4(&VAR_9->sc_mutex);
  } else {
   FUNC_3(&VAR_9->sc_mutex);
   VAR_9->sc_fflags &= ~VAR_4;
   FUNC_4(&VAR_9->sc_mutex);
  }
  break;

 case 132:
  if (!(VAR_8 & VAR_2)) {
   VAR_12 = VAR_1;
   break;
  }
  VAR_10 = VAR_7;
  switch (VAR_10->ugd_report_type) {
  case 134:
   VAR_11 = VAR_9->sc_isize;
   VAR_13 = VAR_9->sc_iid;
   break;
  case 133:
   VAR_11 = VAR_9->sc_osize;
   VAR_13 = VAR_9->sc_oid;
   break;
  case 135:
   VAR_11 = VAR_9->sc_fsize;
   VAR_13 = VAR_9->sc_fid;
   break;
  default:
   return (VAR_0);
  }
  if (VAR_13 != 0)
   FUNC_0(VAR_10->ugd_data, &VAR_13, 1);
  VAR_12 = FUNC_5(VAR_9, VAR_10->ugd_report_type, VAR_13,
      ((void*)0), VAR_10->ugd_data, FUNC_2(VAR_10->ugd_maxlen, VAR_11));
  break;

 case 128:
  if (!(VAR_8 & VAR_3)) {
   VAR_12 = VAR_1;
   break;
  }
  VAR_10 = VAR_7;
  switch (VAR_10->ugd_report_type) {
  case 134:
   VAR_11 = VAR_9->sc_isize;
   VAR_13 = VAR_9->sc_iid;
   break;
  case 133:
   VAR_11 = VAR_9->sc_osize;
   VAR_13 = VAR_9->sc_oid;
   break;
  case 135:
   VAR_11 = VAR_9->sc_fsize;
   VAR_13 = VAR_9->sc_fid;
   break;
  default:
   return (VAR_0);
  }
  if (VAR_13 != 0)
   FUNC_0(VAR_10->ugd_data, &VAR_13, 1);
  VAR_12 = FUNC_6(VAR_9, VAR_10->ugd_report_type, VAR_13,
      ((void*)0), VAR_10->ugd_data, FUNC_2(VAR_10->ugd_maxlen, VAR_11));
  break;

 case 130:

  *(int *)VAR_7 = 0;
  break;

 default:
  VAR_12 = VAR_0;
  break;
 }
 return (VAR_12);
}
