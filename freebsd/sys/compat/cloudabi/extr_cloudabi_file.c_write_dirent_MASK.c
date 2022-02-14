
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int uio_resid; } ;
struct dirent {int d_namlen; int d_type; TYPE_1__* d_name; int d_fileno; } ;
struct TYPE_3__ {int d_namlen; void* d_type; int d_ino; int d_next; } ;
typedef TYPE_1__ cloudabi_dirent_t ;
typedef int cloudabi_dircookie_t ;
typedef int cde ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;







 int FUNC_0 (TYPE_1__*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_1(struct dirent *VAR_7, cloudabi_dircookie_t VAR_8, struct uio *VAR_9)
{
 cloudabi_dirent_t VAR_10 = {
  .d_next = VAR_8,
  .d_ino = VAR_7->d_fileno,
  .d_namlen = VAR_7->d_namlen,
 };
 size_t VAR_11;
 int VAR_12;


 switch (VAR_7->d_type) {
 case 134:
  VAR_10.d_type = VAR_0;
  break;
 case 133:
  VAR_10.d_type = VAR_1;
  break;
 case 132:
  VAR_10.d_type = VAR_2;
  break;
 case 131:
  VAR_10.d_type = VAR_4;
  break;
 case 130:
  VAR_10.d_type = VAR_5;
  break;
 case 129:
  VAR_10.d_type = VAR_3;
  break;
 case 128:

  VAR_10.d_type = VAR_4;
  break;
 default:
  VAR_10.d_type = VAR_6;
  break;
 }


 VAR_11 = sizeof(VAR_10) < VAR_9->uio_resid ? sizeof(VAR_10) : VAR_9->uio_resid;
 VAR_12 = FUNC_0(&VAR_10, VAR_11, VAR_9);
 if (VAR_12 != 0)
  return (VAR_12);


 VAR_11 = VAR_7->d_namlen < VAR_9->uio_resid ? VAR_7->d_namlen : VAR_9->uio_resid;
 return (FUNC_0(VAR_7->d_name, VAR_11, VAR_9));
}
