
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ ctt_size; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_stype_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_1(uint8_t VAR_2, const ctf_type_t *VAR_3, ssize_t *VAR_4,
    ssize_t *VAR_5)
{
 ssize_t VAR_6, VAR_7;

 if (VAR_2 > VAR_1 &&
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
