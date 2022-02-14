
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct _nls_set_hdr {scalar_t__ __nmsgs; scalar_t__ __index; scalar_t__ __setno; } ;
struct _nls_msg_hdr {scalar_t__ __offset; scalar_t__ __msgno; } ;
struct _nls_cat_hdr {scalar_t__ __msg_txt_offset; scalar_t__ __msg_hdr_offset; scalar_t__ __nsets; } ;
typedef TYPE_1__* nl_catd ;
struct TYPE_4__ {scalar_t__ __data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

char *
FUNC_1(nl_catd VAR_4, int VAR_5, int VAR_6, const char *VAR_7)
{
 struct _nls_cat_hdr *VAR_8;
 struct _nls_msg_hdr *VAR_9;
 struct _nls_set_hdr *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_4 == ((void*)0) || VAR_4 == VAR_2) {
  VAR_3 = VAR_0;

  return ((char *)VAR_7);
 }

 VAR_8 = (struct _nls_cat_hdr *)VAR_4->__data;
 VAR_10 = (struct _nls_set_hdr *)(void *)((char *)VAR_4->__data +
     sizeof(struct _nls_cat_hdr));


 VAR_12 = 0;
 VAR_14 = FUNC_0((u_int32_t)VAR_8->__nsets) - 1;
 while (VAR_12 <= VAR_14) {
  VAR_11 = (VAR_12 + VAR_14) / 2;
  VAR_13 = VAR_5 - FUNC_0((u_int32_t)VAR_10[VAR_11].__setno);

  if (VAR_13 == 0) {
   VAR_9 = (struct _nls_msg_hdr *)
       (void *)((char *)VAR_4->__data +
       sizeof(struct _nls_cat_hdr) +
       FUNC_0((u_int32_t)VAR_8->__msg_hdr_offset));

   VAR_12 = FUNC_0((u_int32_t)VAR_10[VAR_11].__index);
   VAR_14 = VAR_12 + FUNC_0((u_int32_t)VAR_10[VAR_11].__nmsgs) - 1;
   while (VAR_12 <= VAR_14) {
    VAR_11 = (VAR_12 + VAR_14) / 2;
    VAR_13 = VAR_6 -
        FUNC_0((u_int32_t)VAR_9[VAR_11].__msgno);
    if (VAR_13 == 0) {
     return ((char *) VAR_4->__data +
         sizeof(struct _nls_cat_hdr) +
         FUNC_0((u_int32_t)
         VAR_8->__msg_txt_offset) +
         FUNC_0((u_int32_t)
         VAR_9[VAR_11].__offset));
    } else if (VAR_13 < 0) {
     VAR_14 = VAR_11 - 1;
    } else {
     VAR_12 = VAR_11 + 1;
    }
   }


   goto notfound;

  } else if (VAR_13 < 0) {
   VAR_14 = VAR_11 - 1;
  } else {
   VAR_12 = VAR_11 + 1;
  }
 }

notfound:

 VAR_3 = VAR_1;

 return ((char *)VAR_7);
}
