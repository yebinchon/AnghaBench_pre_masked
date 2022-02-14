
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_14__ {int pe_flags; int pe_fd; } ;
struct TYPE_11__ {scalar_t__ sh_rawsize; scalar_t__ sh_rawptr; } ;
struct TYPE_13__ {int ps_flags; int ps_ndx; TYPE_2__ ps_sh; } ;
struct TYPE_10__ {char* pb_buf; } ;
struct TYPE_12__ {TYPE_1__ sb_pb; } ;
typedef TYPE_2__ PE_SecHdr ;
typedef TYPE_3__ PE_SecBuf ;
typedef TYPE_4__ PE_Scn ;
typedef TYPE_5__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 size_t FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*,size_t) ;

int
FUNC_5(PE *VAR_5, PE_Scn *VAR_6)
{
 PE_SecHdr *VAR_7;
 PE_SecBuf *VAR_8;
 size_t VAR_9;
 char VAR_10[4];

 FUNC_0(VAR_5 != ((void*)0) && VAR_6 != ((void*)0));
 FUNC_0((VAR_6->ps_flags & VAR_1) == 0);

 VAR_7 = &VAR_6->ps_sh;


 if (VAR_7->sh_rawsize == 0) {
  (void) FUNC_2(VAR_6, 0);
  VAR_6->ps_flags |= VAR_1;
  return (0);
 }

 if ((VAR_5->pe_flags & VAR_2) == 0) {
  if (FUNC_3(VAR_5->pe_fd, (off_t) VAR_7->sh_rawptr, VAR_3) < 0) {
   VAR_4 = VAR_0;
   return (-1);
  }
 }

 if ((VAR_8 = FUNC_2(VAR_6, VAR_7->sh_rawsize)) == ((void*)0))
  return (-1);

 if (FUNC_4(VAR_5->pe_fd, VAR_8->sb_pb.pb_buf, VAR_7->sh_rawsize) !=
     (ssize_t) VAR_7->sh_rawsize) {
  VAR_4 = VAR_0;
  return (-1);
 }

 if (VAR_6->ps_ndx == 0xFFFFFFFFU) {





  if (FUNC_4(VAR_5->pe_fd, VAR_10, sizeof(VAR_10)) !=
      (ssize_t) sizeof(VAR_10)) {
   VAR_4 = VAR_0;
   return (-1);
  }
  VAR_9 = FUNC_1(VAR_10);





  if (VAR_9 > 4) {
   VAR_9 -= 4;
   if ((VAR_8 = FUNC_2(VAR_6, VAR_9)) == ((void*)0))
    return (-1);
   if (FUNC_4(VAR_5->pe_fd, VAR_8->sb_pb.pb_buf, VAR_9) !=
       (ssize_t) VAR_9) {
    VAR_4 = VAR_0;
    return (-1);
   }
  }
 }

 VAR_6->ps_flags |= VAR_1;

 return (0);
}
