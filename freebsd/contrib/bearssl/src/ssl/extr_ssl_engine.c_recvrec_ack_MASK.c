
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* vtable; } ;
struct TYPE_9__ {scalar_t__ iomode; unsigned char* ibuf; unsigned char* obuf; size_t ixb; size_t ixa; unsigned int ixc; unsigned char record_type_in; unsigned int version_in; int ibuf_len; TYPE_1__ in; scalar_t__ incrypt; } ;
typedef TYPE_2__ br_ssl_engine_context ;
struct TYPE_10__ {unsigned char* (* decrypt ) (TYPE_3__**,unsigned char,unsigned int,unsigned char*,size_t*) ;int (* check_length ) (TYPE_3__**,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (unsigned char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__**,unsigned int) ;
 unsigned char* FUNC_4 (TYPE_3__**,unsigned char,unsigned int,unsigned char*,size_t*) ;

__attribute__((used)) static void
FUNC_5(br_ssl_engine_context *VAR_7, size_t VAR_8)
{
 unsigned char *VAR_9;
 size_t VAR_10;






 if (VAR_7->iomode == VAR_6 && VAR_7->ibuf == VAR_7->obuf) {
  VAR_7->iomode = VAR_5;
 }




 VAR_7->ixb = (VAR_7->ixa += VAR_8);
 VAR_7->ixc -= VAR_8;





 if (VAR_7->ixa < 5) {
  return;
 }




 if (VAR_7->ixa == 5) {
  unsigned VAR_11;
  unsigned VAR_12;
  VAR_7->record_type_in = VAR_7->ibuf[0];
  VAR_11 = FUNC_0(VAR_7->ibuf + 1);
  if ((VAR_11 >> 8) != 3) {
   FUNC_1(VAR_7, VAR_4);
   return;
  }







  if (VAR_7->version_in != 0 && VAR_7->version_in != VAR_11) {
   FUNC_1(VAR_7, VAR_2);
   return;
  }
  VAR_7->version_in = VAR_11;
  VAR_12 = FUNC_0(VAR_7->ibuf + 3);
  if (VAR_7->incrypt) {
   if (!VAR_7->in.vtable->check_length(
    &VAR_7->in.vtable, VAR_12))
   {
    FUNC_1(VAR_7, VAR_0);
    return;
   }
   if (VAR_12 > (VAR_7->ibuf_len - 5)) {
    FUNC_1(VAR_7, VAR_3);
    return;
   }
  } else {
   if (VAR_12 > 16384) {
    FUNC_1(VAR_7, VAR_0);
    return;
   }
  }
  if (VAR_12 == 0) {
   FUNC_2(VAR_7);
  } else {
   VAR_7->ixa = VAR_7->ixb = 5;
   VAR_7->ixc = VAR_12;
  }
  return;
 }







 if (!VAR_7->incrypt) {
  VAR_7->ixa = 5;
  return;
 }





 if (VAR_7->ixc != 0) {
  return;
 }




 VAR_10 = VAR_7->ixa - 5;
 VAR_9 = VAR_7->in.vtable->decrypt(&VAR_7->in.vtable,
  VAR_7->record_type_in, VAR_7->version_in, VAR_7->ibuf + 5, &VAR_10);
 if (VAR_9 == 0) {
  FUNC_1(VAR_7, VAR_1);
  return;
 }
 VAR_7->ixa = (size_t)(VAR_9 - VAR_7->ibuf);
 VAR_7->ixb = VAR_7->ixa + VAR_10;





 if (VAR_7->ixa == VAR_7->ixb) {
  FUNC_2(VAR_7);
 }
}
