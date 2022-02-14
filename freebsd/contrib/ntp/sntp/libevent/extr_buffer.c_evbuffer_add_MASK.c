
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int flags; scalar_t__ misalign; size_t buffer_len; size_t off; scalar_t__ buffer; } ;
struct evbuffer {size_t total_len; size_t n_add_for_cb; struct evbuffer_chain* last; scalar_t__ freeze_end; } ;
typedef scalar_t__ ev_uint64_t ;


 int FUNC_0 (struct evbuffer_chain*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (int) ;
 size_t VAR_3 ;
 int FUNC_4 (struct evbuffer_chain*) ;
 int FUNC_5 (struct evbuffer*,struct evbuffer_chain*) ;
 struct evbuffer_chain* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (struct evbuffer_chain*,size_t) ;
 int FUNC_8 (struct evbuffer*) ;
 int FUNC_9 (scalar_t__,unsigned char const*,size_t) ;

int
FUNC_10(struct evbuffer *VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct evbuffer_chain *VAR_7, *VAR_8;
 const unsigned char *VAR_9 = VAR_5;
 size_t VAR_10, VAR_11;
 int VAR_12 = -1;

 FUNC_1(VAR_4);

 if (VAR_4->freeze_end) {
  goto done;
 }

 if (VAR_6 > VAR_3 - VAR_4->total_len) {
  goto done;
 }

 VAR_7 = VAR_4->last;



 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_6(VAR_6);
  if (!VAR_7)
   goto done;
  FUNC_5(VAR_4, VAR_7);
 }

 if ((VAR_7->flags & VAR_2) == 0) {

  FUNC_3(VAR_7->misalign >= 0 &&
      (ev_uint64_t)VAR_7->misalign <= VAR_0);
  VAR_10 = VAR_7->buffer_len - (size_t)VAR_7->misalign - VAR_7->off;
  if (VAR_10 >= VAR_6) {


   FUNC_9(VAR_7->buffer + VAR_7->misalign + VAR_7->off,
       VAR_9, VAR_6);
   VAR_7->off += VAR_6;
   VAR_4->total_len += VAR_6;
   VAR_4->n_add_for_cb += VAR_6;
   goto out;
  } else if (!FUNC_0(VAR_7) &&
      FUNC_7(VAR_7, VAR_6)) {

   FUNC_4(VAR_7);

   FUNC_9(VAR_7->buffer + VAR_7->off, VAR_9, VAR_6);
   VAR_7->off += VAR_6;
   VAR_4->total_len += VAR_6;
   VAR_4->n_add_for_cb += VAR_6;
   goto out;
  }
 } else {

  VAR_10 = 0;
 }


 VAR_11 = VAR_7->buffer_len;
 if (VAR_11 <= VAR_1/2)
  VAR_11 <<= 1;
 if (VAR_6 > VAR_11)
  VAR_11 = VAR_6;
 VAR_8 = FUNC_6(VAR_11);
 if (VAR_8 == ((void*)0))
  goto done;

 if (VAR_10) {
  FUNC_9(VAR_7->buffer + VAR_7->misalign + VAR_7->off,
      VAR_9, VAR_10);
  VAR_7->off += VAR_10;
  VAR_4->total_len += VAR_10;
  VAR_4->n_add_for_cb += VAR_10;
 }

 VAR_9 += VAR_10;
 VAR_6 -= VAR_10;

 FUNC_9(VAR_8->buffer, VAR_9, VAR_6);
 VAR_8->off = VAR_6;
 FUNC_5(VAR_4, VAR_8);
 VAR_4->n_add_for_cb += VAR_6;

out:
 FUNC_8(VAR_4);
 VAR_12 = 0;
done:
 FUNC_2(VAR_4);
 return VAR_12;
}
