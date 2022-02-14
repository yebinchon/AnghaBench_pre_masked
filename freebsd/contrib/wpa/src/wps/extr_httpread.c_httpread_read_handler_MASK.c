
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {int got_hdr; scalar_t__ body_nbytes; int content_length; int got_body; char* hdr; int hdr_nbytes; scalar_t__ max_bytes; scalar_t__ body_alloc_nbytes; char* body; int in_chunk_data; int chunk_start; scalar_t__ chunk_size; int in_trailer; int trailer_state; scalar_t__ hdr_type; int got_file; int cookie; int (* cb ) (struct httpread*,int ,int ) ;int sd; scalar_t__ chunked; scalar_t__ got_content_length; } ;
typedef int readbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,struct httpread*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct httpread*) ;
 int VAR_9 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;
 int FUNC_10 (struct httpread*,int ,int ) ;
 int FUNC_11 (struct httpread*,int ,int ) ;




 int FUNC_12 (int ,char*,char*,int) ;
 int FUNC_13 (int ,char*,...) ;

__attribute__((used)) static void FUNC_14(int VAR_10, void *VAR_11, void *VAR_12)
{
 struct httpread *VAR_13 = VAR_12;
 int VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;
 char VAR_18[VAR_5];




 FUNC_13(VAR_6, "httpread: Trying to read more data(%p)", VAR_13);
 VAR_14 = FUNC_7(VAR_13->sd, VAR_18, sizeof(VAR_18));
 if (VAR_14 < 0) {
  FUNC_13(VAR_6, "httpread failed: %s", FUNC_8(VAR_8));
  goto bad;
 }
 FUNC_12(VAR_7, "httpread - read", VAR_18, VAR_14);
 if (VAR_14 == 0) {




  if (!VAR_13->got_hdr) {

   FUNC_13(VAR_6, "httpread premature eof(%p)", VAR_13);
   goto bad;
  }
  if (VAR_13->chunked || VAR_13->got_content_length) {

   FUNC_13(VAR_6,
       "httpread premature eof(%p) %d/%d",
       VAR_13, VAR_13->body_nbytes,
       VAR_13->content_length);
   goto bad;
  }




  FUNC_13(VAR_6, "httpread ok eof(%p)", VAR_13);
  VAR_13->got_body = 1;
  goto got_file;
 }
 VAR_15 = VAR_18;




 if (!VAR_13->got_hdr) {
  VAR_16 = VAR_13->hdr + VAR_13->hdr_nbytes;





  for (;;) {
   if (VAR_14 == 0)
    goto get_more;
   if (VAR_13->hdr_nbytes == VAR_4) {
    FUNC_13(VAR_6,
        "httpread: Too long header");
    goto bad;
   }
   *VAR_16++ = *VAR_15++;
   VAR_14--;
   VAR_13->hdr_nbytes++;
   if (VAR_13->hdr_nbytes >= 4 &&
       VAR_16[-1] == '\n' &&
       VAR_16[-2] == '\r' &&
       VAR_16[-3] == '\n' &&
       VAR_16[-4] == '\r' ) {
    VAR_13->got_hdr = 1;
    *VAR_16 = 0;
    break;
   }
  }

  if (FUNC_2(VAR_13)) {
   FUNC_13(VAR_6, "httpread bad hdr(%p)", VAR_13);
   goto bad;
  }
  if (VAR_13->max_bytes == 0) {
   FUNC_13(VAR_6, "httpread no body hdr end(%p)",
       VAR_13);
   goto got_file;
  }
  if (VAR_13->got_content_length && VAR_13->content_length == 0) {
   FUNC_13(VAR_6,
       "httpread zero content length(%p)", VAR_13);
   goto got_file;
  }
 }




 if (!FUNC_6(VAR_13->hdr, "SUBSCRIBE", 9) ||
     !FUNC_6(VAR_13->hdr, "UNSUBSCRIBE", 11) ||
     !FUNC_6(VAR_13->hdr, "HEAD", 4) ||
     !FUNC_6(VAR_13->hdr, "GET", 3)) {
  if (!VAR_13->got_body) {
   FUNC_13(VAR_6, "httpread NO BODY for sp. type");
  }
  VAR_13->got_body = 1;
  goto got_file;
 }





 if (VAR_14 == 0)
  goto get_more;
 if (!VAR_13->got_body) {




  if (VAR_13->body_alloc_nbytes < (VAR_13->body_nbytes + VAR_14 + 1)) {
   char *VAR_19;
   int VAR_20;

   if (VAR_13->body_nbytes >= VAR_13->max_bytes) {
    FUNC_13(VAR_6,
        "httpread: body_nbytes=%d >= max_bytes=%d",
        VAR_13->body_nbytes, VAR_13->max_bytes);
    goto bad;
   }
   VAR_20 = VAR_13->body_alloc_nbytes +
    VAR_1;




   if (VAR_13->got_content_length &&
       VAR_20 < (VAR_13->content_length + 1))
    VAR_20 = VAR_13->content_length + 1;
   if (VAR_20 < VAR_13->body_alloc_nbytes ||
       VAR_20 > VAR_13->max_bytes +
       VAR_1) {
    FUNC_13(VAR_6,
        "httpread: Unacceptable body length %d (body_alloc_nbytes=%u max_bytes=%u)",
        VAR_20,
        VAR_13->body_alloc_nbytes,
        VAR_13->max_bytes);
    goto bad;
   }
   if ((VAR_19 = FUNC_5(VAR_13->body, VAR_20))
       == ((void*)0)) {
    FUNC_13(VAR_6,
        "httpread: Failed to reallocate buffer (len=%d)",
        VAR_20);
    goto bad;
   }

   VAR_13->body = VAR_19;
   VAR_13->body_alloc_nbytes = VAR_20;
  }

  VAR_17 = VAR_13->body + VAR_13->body_nbytes;
  for (;;) {
   int VAR_21;

   if (VAR_13->chunked && VAR_13->in_chunk_data == 0) {

    char *VAR_22 = VAR_13->body + VAR_13->chunk_start;
    if (VAR_17-VAR_22 >= 2 && VAR_17[-2] == '\r' &&
        VAR_17[-1] == '\n') {




     if (!FUNC_3(*VAR_22)) {
      FUNC_13(VAR_6,
          "httpread: Unexpected chunk header value (not a hex digit)");
      goto bad;
     }
     VAR_13->chunk_size = FUNC_9(VAR_22, ((void*)0), 16);
     if (VAR_13->chunk_size < 0 ||
         VAR_13->chunk_size > VAR_13->max_bytes) {
      FUNC_13(VAR_6,
          "httpread: Invalid chunk size %d",
          VAR_13->chunk_size);
      goto bad;
     }



     VAR_13->body_nbytes = VAR_13->chunk_start;
     VAR_17 = VAR_22;
     if (VAR_13->chunk_size == 0) {


      VAR_13->in_trailer = 1;
      FUNC_13(VAR_6,
          "httpread end chunks(%p)",
          VAR_13);
      break;
     }
     VAR_13->in_chunk_data = 1;

    }
   } else if (VAR_13->chunked) {

    if ((VAR_13->body_nbytes - VAR_13->chunk_start) ==
        (VAR_13->chunk_size + 2)) {






     if (VAR_17[-1] == '\n' &&
         VAR_17[-2] == '\r') {
     } else {
      FUNC_13(VAR_6,
          "httpread: Invalid chunk end");
      goto bad;
     }
     VAR_13->body_nbytes -= 2;
     VAR_17 -= 2;
     VAR_13->chunk_start = VAR_13->body_nbytes;
     VAR_13->in_chunk_data = 0;
     VAR_13->chunk_size = 0;
    }
   } else if (VAR_13->got_content_length &&
       VAR_13->body_nbytes >= VAR_13->content_length) {
    VAR_13->got_body = 1;
    FUNC_13(VAR_6,
        "httpread got content(%p)", VAR_13);
    goto got_file;
   }
   if (VAR_14 <= 0)
    break;

   if (VAR_13->chunked && VAR_13->in_chunk_data) {



    VAR_21 = (VAR_13->chunk_start + VAR_13->chunk_size + 2) -
     VAR_13->body_nbytes;
   } else if (VAR_13->chunked) {

    *VAR_17++ = *VAR_15++;
    VAR_14--;
    VAR_13->body_nbytes++;
    continue;
   } else if (VAR_13->got_content_length) {
    VAR_21 = VAR_13->content_length - VAR_13->body_nbytes;
   } else {
    VAR_21 = VAR_14;
   }

   if (VAR_21 < 0) {
    FUNC_13(VAR_6,
        "httpread: Invalid ncopy=%d", VAR_21);
    goto bad;
   }
   if (VAR_21 > VAR_14)
    VAR_21 = VAR_14;
   FUNC_4(VAR_17, VAR_15, VAR_21);
   VAR_17 += VAR_21;
   VAR_13->body_nbytes += VAR_21;
   VAR_15 += VAR_21;
   VAR_14 -= VAR_21;
  }
 }
 if (VAR_13->chunked && VAR_13->in_trailer) {






  for (;;) {
   int VAR_23;
   if (VAR_14 <= 0)
    break;
   VAR_23 = *VAR_15++;
   VAR_14--;
   switch (VAR_13->trailer_state) {
   case 130:
    if (VAR_23 == '\r')
     VAR_13->trailer_state = 131;
    else
     VAR_13->trailer_state = 129;
    break;
   case 131:

    if (VAR_23 == '\n') {
     VAR_13->trailer_state = 130;
     VAR_13->in_trailer = 0;
     FUNC_13(VAR_6,
         "httpread got content(%p)",
         VAR_13);
     VAR_13->got_body = 1;
     goto got_file;
    }
    VAR_13->trailer_state = 129;
    break;
   case 129:
    if (VAR_23 == '\r')
     VAR_13->trailer_state = 128;
    break;
   case 128:
    if (VAR_23 == '\n')
     VAR_13->trailer_state = 130;
    else
     VAR_13->trailer_state = 129;
    break;
   }
  }
 }
 goto get_more;

bad:

 FUNC_13(VAR_6, "httpread read/parse failure (%p)", VAR_13);
 (*VAR_13->cb)(VAR_13, VAR_13->cookie, VAR_2);
 return;

get_more:
 FUNC_13(VAR_6, "httpread: get more (%p)", VAR_13);
 return;

got_file:
 FUNC_13(VAR_6, "httpread got file %d bytes type %d",
     VAR_13->body_nbytes, VAR_13->hdr_type);
 FUNC_12(VAR_7, "httpread: body",
     VAR_13->body, VAR_13->body_nbytes);

 if (VAR_13->body)
  VAR_13->body[VAR_13->body_nbytes] = 0;
 VAR_13->got_file = 1;




 FUNC_1(VAR_13->sd, VAR_0);



 FUNC_0(VAR_9, ((void*)0), VAR_13);
 (*VAR_13->cb)(VAR_13, VAR_13->cookie, VAR_3);
}
