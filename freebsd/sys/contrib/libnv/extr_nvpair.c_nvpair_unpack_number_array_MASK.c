
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ nvp_type; int nvp_nitems; size_t nvp_datasize; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__* FUNC_4 (size_t) ;

const unsigned char *
FUNC_5(bool VAR_2, nvpair_t *VAR_3, const unsigned char *VAR_4,
     size_t *VAR_5)
{
 uint64_t *VAR_6;
 size_t VAR_7;
 unsigned int VAR_8;

 FUNC_1(VAR_3->nvp_type == VAR_1);

 VAR_7 = sizeof(*VAR_6) * VAR_3->nvp_nitems;
 if (VAR_3->nvp_datasize != VAR_7 || *VAR_5 < VAR_7 ||
     VAR_3->nvp_nitems == 0 || VAR_7 < VAR_3->nvp_nitems) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 VAR_6 = FUNC_4(VAR_7);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_3->nvp_nitems; VAR_8++) {
  if (VAR_2)
   VAR_6[VAR_8] = FUNC_2(VAR_4);
  else
   VAR_6[VAR_8] = FUNC_3(VAR_4);

  VAR_4 += sizeof(*VAR_6);
  *VAR_5 -= sizeof(*VAR_6);
 }

 VAR_3->nvp_data = (uint64_t)(uintptr_t)VAR_6;

 return (VAR_4);
}
