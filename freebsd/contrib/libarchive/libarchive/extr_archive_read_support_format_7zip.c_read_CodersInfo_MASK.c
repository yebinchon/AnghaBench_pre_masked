
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
struct _7z_folder {unsigned int* unPackSize; unsigned int numOutStreams; int digest; int digest_defined; } ;
struct _7z_digests {unsigned int numFolders; unsigned int dataStreamIndex; int * digests; struct _7z_folder* folders; int * defineds; } ;
struct _7z_coders_info {unsigned int numFolders; unsigned int dataStreamIndex; int * digests; struct _7z_folder* folders; int * defineds; } ;
typedef int digest ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (struct _7z_digests*) ;
 unsigned char* FUNC_3 (struct archive_read*,int) ;
 unsigned char const VAR_1 ;
 unsigned char const VAR_2 ;
 unsigned char const VAR_3 ;
 unsigned char const VAR_4 ;
 int FUNC_4 (struct _7z_digests*,int ,int) ;
 scalar_t__ FUNC_5 (struct archive_read*,unsigned int*) ;
 scalar_t__ FUNC_6 (struct archive_read*,struct _7z_digests*,size_t) ;
 int FUNC_7 (struct archive_read*,struct _7z_folder*) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_5, struct _7z_coders_info *VAR_6)
{
 const unsigned char *VAR_7;
 struct _7z_digests VAR_8;
 unsigned VAR_9;

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 if ((VAR_7 = FUNC_3(VAR_5, 1)) == ((void*)0))
  goto failed;
 if (*VAR_7 != VAR_4)
  goto failed;




 if (FUNC_5(VAR_5, &(VAR_6->numFolders)) < 0)
  goto failed;
 if (VAR_0 < VAR_6->numFolders)
  return (-1);




 if ((VAR_7 = FUNC_3(VAR_5, 1)) == ((void*)0))
  goto failed;
 switch (*VAR_7) {
 case 0:
  VAR_6->folders =
   FUNC_1((size_t)VAR_6->numFolders, sizeof(*VAR_6->folders));
  if (VAR_6->folders == ((void*)0))
   return (-1);
  for (VAR_9 = 0; VAR_9 < VAR_6->numFolders; VAR_9++) {
   if (FUNC_7(VAR_5, &(VAR_6->folders[VAR_9])) < 0)
    goto failed;
  }
  break;
 case 1:
  if (FUNC_5(VAR_5, &(VAR_6->dataStreamIndex)) < 0)
   return (-1);
  if (VAR_0 < VAR_6->dataStreamIndex)
   return (-1);
  if (VAR_6->numFolders > 0) {
   FUNC_0(&VAR_5->archive, -1,
       "Malformed 7-Zip archive");
   goto failed;
  }
  break;
 default:
  FUNC_0(&VAR_5->archive, -1,
      "Malformed 7-Zip archive");
  goto failed;
 }

 if ((VAR_7 = FUNC_3(VAR_5, 1)) == ((void*)0))
  goto failed;
 if (*VAR_7 != VAR_2)
  goto failed;

 for (VAR_9 = 0; VAR_9 < VAR_6->numFolders; VAR_9++) {
  struct _7z_folder *VAR_10 = &(VAR_6->folders[VAR_9]);
  unsigned VAR_11;

  VAR_10->unPackSize =
      FUNC_1((size_t)VAR_10->numOutStreams, sizeof(*VAR_10->unPackSize));
  if (VAR_10->unPackSize == ((void*)0))
   goto failed;
  for (VAR_11 = 0; VAR_11 < VAR_10->numOutStreams; VAR_11++) {
   if (FUNC_5(VAR_5, &(VAR_10->unPackSize[VAR_11])) < 0)
    goto failed;
  }
 }




 if ((VAR_7 = FUNC_3(VAR_5, 1)) == ((void*)0))
  goto failed;
 if (*VAR_7 == VAR_3)
  return (0);
 if (*VAR_7 != VAR_1)
  goto failed;
 if (FUNC_6(VAR_5, &VAR_8, (size_t)VAR_6->numFolders) < 0)
  goto failed;
 for (VAR_9 = 0; VAR_9 < VAR_6->numFolders; VAR_9++) {
  VAR_6->folders[VAR_9].digest_defined = VAR_8.defineds[VAR_9];
  VAR_6->folders[VAR_9].digest = VAR_8.digests[VAR_9];
 }




 if ((VAR_7 = FUNC_3(VAR_5, 1)) == ((void*)0))
  goto failed;
 if (*VAR_7 != VAR_3)
  goto failed;
 FUNC_2(&VAR_8);
 return (0);
failed:
 FUNC_2(&VAR_8);
 return (-1);
}
