
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;
struct archive_read {TYPE_1__* format; } ;
struct _7zip {scalar_t__ header_offset; } ;
struct TYPE_6__ {unsigned int numFolders; struct _7z_folder* folders; } ;
struct TYPE_5__ {scalar_t__* sizes; scalar_t__ pos; unsigned int numPackStreams; scalar_t__* positions; } ;
struct _7z_stream_info {TYPE_3__ ci; int ss; TYPE_2__ pi; } ;
struct _7z_folder {unsigned int packIndex; scalar_t__ numPackedStreams; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 unsigned char* FUNC_0 (struct archive_read*,int) ;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 unsigned char const VAR_2 ;
 unsigned char const VAR_3 ;
 int FUNC_1 (struct _7z_stream_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct archive_read*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct archive_read*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct archive_read*,int *,struct _7z_folder*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4, struct _7z_stream_info *VAR_5)
{
 struct _7zip *VAR_6 = (struct _7zip *)VAR_4->format->data;
 const unsigned char *VAR_7;
 unsigned VAR_8;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 if ((VAR_7 = FUNC_0(VAR_4, 1)) == ((void*)0))
  return (-1);
 if (*VAR_7 == VAR_1) {
  uint64_t VAR_9;

  if (FUNC_3(VAR_4, &(VAR_5->pi)) < 0)
   return (-1);

  if (VAR_5->pi.positions == ((void*)0) || VAR_5->pi.sizes == ((void*)0))
   return (-1);



  VAR_9 = VAR_5->pi.pos;
  for (VAR_8 = 0; VAR_8 < VAR_5->pi.numPackStreams; VAR_8++) {
   VAR_5->pi.positions[VAR_8] = VAR_9;
   VAR_9 += VAR_5->pi.sizes[VAR_8];
   if (VAR_9 > VAR_6->header_offset)
    return (-1);
  }
  if ((VAR_7 = FUNC_0(VAR_4, 1)) == ((void*)0))
   return (-1);
 }
 if (*VAR_7 == VAR_3) {
  uint32_t VAR_10;
  struct _7z_folder *VAR_11;

  if (FUNC_2(VAR_4, &(VAR_5->ci)) < 0)
   return (-1);




  VAR_10 = 0;
  VAR_11 = VAR_5->ci.folders;
  for (VAR_8 = 0; VAR_8 < VAR_5->ci.numFolders; VAR_8++) {
   VAR_11[VAR_8].packIndex = VAR_10;
   VAR_10 += (uint32_t)VAR_11[VAR_8].numPackedStreams;
   if (VAR_10 > VAR_5->pi.numPackStreams)
    return (-1);
  }
  if ((VAR_7 = FUNC_0(VAR_4, 1)) == ((void*)0))
   return (-1);
 }

 if (*VAR_7 == VAR_2) {
  if (FUNC_4(VAR_4, &(VAR_5->ss),
      VAR_5->ci.folders, (size_t)VAR_5->ci.numFolders) < 0)
   return (-1);
  if ((VAR_7 = FUNC_0(VAR_4, 1)) == ((void*)0))
   return (-1);
 }




 if (*VAR_7 != VAR_0)
  return (-1);
 return (0);
}
