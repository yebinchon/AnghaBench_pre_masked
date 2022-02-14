
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftp_handle {scalar_t__ tftp_tsize; size_t off; int tftp_blksize; int currblock; int validsize; scalar_t__ islastblock; TYPE_1__* tftp_hdr; } ;
struct open_file {struct tftp_handle* f_fsdata; } ;
struct TYPE_2__ {scalar_t__ th_data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct tftp_handle*) ;
 int FUNC_3 (struct tftp_handle*) ;
 int FUNC_4 (struct tftp_handle*,int ,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct open_file *VAR_1, void *VAR_2, size_t VAR_3,
    size_t *VAR_4 )
{
 struct tftp_handle *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_7 = 0;
 VAR_6 = VAR_3;
 VAR_5 = VAR_1->f_fsdata;


 if (VAR_5->tftp_tsize > 0 &&
     VAR_5->off + VAR_3 > VAR_5->tftp_tsize) {
  VAR_3 = VAR_5->tftp_tsize - VAR_5->off;
 }

 while (VAR_3 > 0) {
  int VAR_8, VAR_9;

  FUNC_5(32);

  VAR_8 = VAR_5->off / VAR_5->tftp_blksize + 1;

  if (VAR_5->currblock > VAR_8) {
   FUNC_4(VAR_5, 0, "No error: read aborted");
   VAR_7 = FUNC_3(VAR_5);
   if (VAR_7 != 0)
    break;
  }

  while (VAR_5->currblock < VAR_8) {

   VAR_7 = FUNC_2(VAR_5);
   if (VAR_7) {



    return (VAR_7);
   }
   if (VAR_5->islastblock)
    break;
  }

  if (VAR_5->currblock == VAR_8) {
   int VAR_10, VAR_11;

   VAR_10 = VAR_5->off % VAR_5->tftp_blksize;

   VAR_11 = VAR_5->validsize - VAR_10;
   if (VAR_11 < 0) {




    return (VAR_0);
   }
   VAR_9 = (VAR_3 < VAR_11 ? VAR_3 : VAR_11);
   FUNC_0(VAR_5->tftp_hdr->th_data + VAR_10,
       VAR_2, VAR_9);

   VAR_2 = (char *)VAR_2 + VAR_9;
   VAR_5->off += VAR_9;
   VAR_3 -= VAR_9;
   VAR_6 -= VAR_9;

   if ((VAR_5->islastblock) && (VAR_9 == VAR_11))
    break;
  } else {



   return (VAR_0);
  }

 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;
 return (VAR_7);
}
