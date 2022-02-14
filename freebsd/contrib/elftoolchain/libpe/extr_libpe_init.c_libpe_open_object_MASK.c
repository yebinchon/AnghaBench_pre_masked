
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int ssize_t ;
typedef int mode_t ;
struct TYPE_5__ {size_t pe_fsize; scalar_t__ pe_cmd; int pe_fd; void* pe_obj; } ;
typedef int PE_DosHdr ;
typedef int PE_CoffHdr ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ,char*,int) ;

int
FUNC_8(PE *VAR_7)
{
 struct stat VAR_8;
 mode_t VAR_9;
 char VAR_10[sizeof(PE_DosHdr)];

 if (FUNC_4(VAR_7->pe_fd, &VAR_8) < 0)
  return (-1);

 VAR_9 = VAR_8.st_mode;
 VAR_7->pe_fsize = (size_t) VAR_8.st_size;


 if (!FUNC_2(VAR_9) && !FUNC_0(VAR_9) && !FUNC_1(VAR_9) &&
     !FUNC_3(VAR_9)) {
  VAR_6 = VAR_0;
  return (-1);
 }


 if (VAR_7->pe_cmd == VAR_3 && !FUNC_2(VAR_9)) {
  VAR_6 = VAR_0;
  return (-1);
 }


 if (FUNC_2(VAR_9) && VAR_7->pe_fsize < sizeof(PE_CoffHdr)) {
  VAR_6 = VAR_2;
  return (-1);
 }





 if (FUNC_7(VAR_7->pe_fd, VAR_10, 2) != 2) {
  VAR_6 = VAR_1;
  return (-1);
 }

 if (VAR_10[0] == 'M' && VAR_10[1] == 'Z') {
  VAR_7->pe_obj = VAR_5;
  if (FUNC_7(VAR_7->pe_fd, &VAR_10[2], sizeof(PE_DosHdr) - 2) !=
      (ssize_t) sizeof(PE_DosHdr) - 2) {
   VAR_6 = VAR_1;
   return (-1);
  }
  return (FUNC_6(VAR_7, VAR_10));

 } else if (VAR_10[0] == 'P' && VAR_10[1] == 'E') {
  if (FUNC_7(VAR_7->pe_fd, VAR_10, 2) != 2) {
   VAR_6 = VAR_1;
   return (-1);
  }
  if (VAR_10[0] == '\0' && VAR_10[1] == '\0') {
   VAR_7->pe_obj = VAR_5;
   if (FUNC_7(VAR_7->pe_fd, VAR_10, sizeof(PE_CoffHdr)) !=
       (ssize_t) sizeof(PE_CoffHdr)) {
    VAR_6 = VAR_1;
    return (-1);
   }
   return (FUNC_5(VAR_7, VAR_10));
  }
  VAR_6 = VAR_2;
  return (-1);

 } else {
  VAR_7->pe_obj = VAR_4;
  if (FUNC_7(VAR_7->pe_fd, &VAR_10[2], sizeof(PE_CoffHdr) - 2) !=
      (ssize_t) sizeof(PE_CoffHdr) - 2) {
   VAR_6 = VAR_1;
   return (-1);
  }
  return (FUNC_5(VAR_7, VAR_10));
 }
}
