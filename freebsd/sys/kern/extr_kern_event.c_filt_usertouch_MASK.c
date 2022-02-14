
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct kevent {int fflags; int flags; int data; } ;
struct knote {int kn_hookid; int kn_sfflags; int kn_flags; int kn_fflags; int kn_data; int kn_sdata; struct kevent kn_kevent; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_4, struct kevent *VAR_5, u_long VAR_6)
{
 u_int VAR_7;

 switch (VAR_6) {
 case 132:
  if (VAR_5->fflags & VAR_3)
   VAR_4->kn_hookid = 1;

  VAR_7 = VAR_5->fflags & VAR_1;
  VAR_5->fflags &= VAR_2;
  switch (VAR_7) {
  case 129:
   break;

  case 131:
   VAR_4->kn_sfflags &= VAR_5->fflags;
   break;

  case 128:
   VAR_4->kn_sfflags |= VAR_5->fflags;
   break;

  case 130:
   VAR_4->kn_sfflags = VAR_5->fflags;
   break;

  default:

   break;
  }
  VAR_4->kn_sdata = VAR_5->data;
  if (VAR_5->flags & VAR_0) {
   VAR_4->kn_hookid = 0;
   VAR_4->kn_data = 0;
   VAR_4->kn_fflags = 0;
  }
  break;

        case 133:
  *VAR_5 = VAR_4->kn_kevent;
  VAR_5->fflags = VAR_4->kn_sfflags;
  VAR_5->data = VAR_4->kn_sdata;
  if (VAR_4->kn_flags & VAR_0) {
   VAR_4->kn_hookid = 0;
   VAR_4->kn_data = 0;
   VAR_4->kn_fflags = 0;
  }
  break;

 default:
  FUNC_0("filt_usertouch() - invalid type (%ld)", VAR_6);
  break;
 }
}
