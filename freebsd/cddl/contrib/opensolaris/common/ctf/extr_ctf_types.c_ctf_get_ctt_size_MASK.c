
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ ctt_size; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_stype_t ;
struct TYPE_7__ {scalar_t__ ctf_version; } ;
typedef TYPE_2__ ctf_file_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;

ssize_t
FUNC_1(const ctf_file_t *VAR_2, const ctf_type_t *VAR_3, ssize_t *VAR_4,
    ssize_t *VAR_5)
{
 ssize_t VAR_6, VAR_7;

 if (VAR_2->ctf_version > VAR_1 &&
     VAR_3->ctt_size == VAR_0) {
  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = sizeof (ctf_type_t);
 } else {
  VAR_6 = VAR_3->ctt_size;
  VAR_7 = sizeof (ctf_stype_t);
 }

 if (VAR_4)
  *VAR_4 = VAR_6;
 if (VAR_5)
  *VAR_5 = VAR_7;

 return (VAR_6);
}
