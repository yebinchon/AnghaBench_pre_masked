
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct archive_read {int dummy; } ;
struct TYPE_2__ {int * digests; int * defineds; } ;
struct _7z_pack_info {unsigned int pos; unsigned int numPackStreams; unsigned int* sizes; TYPE_1__ digest; int * positions; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (size_t,int) ;
 unsigned char* FUNC_1 (struct archive_read*,int) ;
 unsigned char const VAR_1 ;
 unsigned char const VAR_2 ;
 int FUNC_2 (struct _7z_pack_info*,int ,int) ;
 scalar_t__ FUNC_3 (struct archive_read*,unsigned int*) ;
 scalar_t__ FUNC_4 (struct archive_read*,TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_3, struct _7z_pack_info *VAR_4)
{
 const unsigned char *VAR_5;
 unsigned VAR_6;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));




 if (FUNC_3(VAR_3, &(VAR_4->pos)) < 0)
  return (-1);




 if (FUNC_3(VAR_3, &(VAR_4->numPackStreams)) < 0)
  return (-1);
 if (VAR_4->numPackStreams == 0)
  return (-1);
 if (VAR_0 < VAR_4->numPackStreams)
  return (-1);




 if ((VAR_5 = FUNC_1(VAR_3, 1)) == ((void*)0))
  return (-1);
 if (*VAR_5 == VAR_1)

  return (0);
 if (*VAR_5 != VAR_2)
  return (-1);
 VAR_4->sizes = FUNC_0((size_t)VAR_4->numPackStreams, sizeof(uint64_t));
 VAR_4->positions = FUNC_0((size_t)VAR_4->numPackStreams, sizeof(uint64_t));
 if (VAR_4->sizes == ((void*)0) || VAR_4->positions == ((void*)0))
  return (-1);

 for (VAR_6 = 0; VAR_6 < VAR_4->numPackStreams; VAR_6++) {
  if (FUNC_3(VAR_3, &(VAR_4->sizes[VAR_6])) < 0)
   return (-1);
 }




 if ((VAR_5 = FUNC_1(VAR_3, 1)) == ((void*)0))
  return (-1);
 if (*VAR_5 == VAR_1) {

  VAR_4->digest.defineds =
      FUNC_0((size_t)VAR_4->numPackStreams, sizeof(*VAR_4->digest.defineds));
  VAR_4->digest.digests =
      FUNC_0((size_t)VAR_4->numPackStreams, sizeof(*VAR_4->digest.digests));
  if (VAR_4->digest.defineds == ((void*)0) || VAR_4->digest.digests == ((void*)0))
   return (-1);
  return (0);
 }

 if (*VAR_5 != VAR_2)
  return (-1);

 if (FUNC_4(VAR_3, &(VAR_4->digest), (size_t)VAR_4->numPackStreams) < 0)
  return (-1);




 if ((VAR_5 = FUNC_1(VAR_3, 1)) == ((void*)0))
  return (-1);
 if (*VAR_5 != VAR_1)
  return (-1);
 return (0);
}
