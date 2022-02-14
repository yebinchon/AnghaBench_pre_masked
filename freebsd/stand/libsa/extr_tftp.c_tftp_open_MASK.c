
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftp_handle {struct tftp_handle* pkt; struct tftp_handle* path; scalar_t__ off; struct iodesc* iodesc; int tftp_blksize; } ;
struct open_file {struct tftp_handle* f_fsdata; scalar_t__ f_devdata; TYPE_1__* f_dev; } ;
struct iodesc {int destip; } ;
struct TYPE_2__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct tftp_handle* FUNC_0 (int,int) ;
 int FUNC_1 (struct tftp_handle*) ;
 int VAR_6 ;
 struct tftp_handle* FUNC_2 (size_t) ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct tftp_handle*,size_t,char*,char*,char const*,char const*) ;
 struct iodesc* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct tftp_handle*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_10, struct open_file *VAR_11)
{
 struct tftp_handle *VAR_12;
 struct iodesc *VAR_13;
 int VAR_14;
 size_t VAR_15;
 const char *VAR_16;

 if (VAR_7 != VAR_4)
  return (VAR_2);

 if (VAR_11->f_dev->dv_type != VAR_0)
  return (VAR_2);

 if (VAR_6)
  return (VAR_1);

 VAR_12 = FUNC_0(1, sizeof(*VAR_12));
 if (!VAR_12)
  return (VAR_3);

 VAR_12->tftp_blksize = VAR_5;
 VAR_12->iodesc = VAR_13 = FUNC_4(*(int *)(VAR_11->f_devdata));
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_12);
  return (VAR_2);
 }

 VAR_13->destip = VAR_9;
 VAR_12->off = 0;
 VAR_15 = (FUNC_5(VAR_8) + 1 + FUNC_5(VAR_10) + 1) * sizeof(char);
 VAR_12->path = FUNC_2(VAR_15);
 if (VAR_12->path == ((void*)0)) {
  FUNC_1(VAR_12);
  return (VAR_3);
 }
 if (VAR_8[FUNC_5(VAR_8) - 1] == '/' || VAR_10[0] == '/')
  VAR_16 = "";
 else
  VAR_16 = "/";
 VAR_14 = FUNC_3(VAR_12->path, VAR_15, "%s%s%s",
     VAR_8, VAR_16, VAR_10);
 if (VAR_14 < 0 || VAR_14 > VAR_15) {
  FUNC_1(VAR_12->path);
  FUNC_1(VAR_12);
  return (VAR_3);
 }

 VAR_14 = FUNC_6(VAR_12);

 if (VAR_14) {
  FUNC_1(VAR_12->path);
  FUNC_1(VAR_12->pkt);
  FUNC_1(VAR_12);
  return (VAR_14);
 }
 VAR_11->f_fsdata = VAR_12;
 VAR_6 = 1;
 return (0);
}
