
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct _7zip {scalar_t__ header_offset; } ;
struct TYPE_6__ {scalar_t__ numPackStreams; scalar_t__ pos; scalar_t__* sizes; } ;
struct TYPE_5__ {scalar_t__ numFolders; } ;
struct _7z_stream_info {TYPE_3__ pi; TYPE_2__ ci; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct archive_read*,struct _7z_stream_info*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_4, struct _7z_stream_info *VAR_5)
{
 struct _7zip *VAR_6 = (struct _7zip *)VAR_4->format->data;

 VAR_3 = 0;
 if (FUNC_1(VAR_4, VAR_5) < 0) {
  if (VAR_3 == VAR_2)
   FUNC_0(&VAR_4->archive, -1,
       "Couldn't allocate memory");
  else
   FUNC_0(&VAR_4->archive, -1,
       "Malformed 7-Zip archive");
  return (VAR_0);
 }

 if (VAR_5->pi.numPackStreams == 0 || VAR_5->ci.numFolders == 0) {
  FUNC_0(&VAR_4->archive, -1, "Malformed 7-Zip archive");
  return (VAR_0);
 }

 if (VAR_6->header_offset < VAR_5->pi.pos + VAR_5->pi.sizes[0] ||
     (int64_t)(VAR_5->pi.pos + VAR_5->pi.sizes[0]) < 0 ||
     VAR_5->pi.sizes[0] == 0 || (int64_t)VAR_5->pi.pos < 0) {
  FUNC_0(&VAR_4->archive, -1, "Malformed Header offset");
  return (VAR_0);
 }

 return (VAR_1);
}
