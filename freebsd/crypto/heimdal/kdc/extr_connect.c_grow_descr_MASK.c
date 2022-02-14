
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descr {size_t size; size_t len; unsigned char* buf; } ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;


 int FUNC_0 (struct descr*) ;
 int FUNC_1 (int ,int *,int ,char*,unsigned long) ;
 size_t FUNC_2 (int,size_t) ;
 scalar_t__ VAR_0 ;
 unsigned char* FUNC_3 (unsigned char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (krb5_context VAR_1,
     krb5_kdc_configuration *VAR_2,
     struct descr *VAR_3, size_t VAR_4)
{
    if (VAR_3->size - VAR_3->len < VAR_4) {
 unsigned char *VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_2(1024, VAR_3->len + VAR_4);
 if (VAR_3->size + VAR_6 > VAR_0) {
     FUNC_1(VAR_1, VAR_2, 0, "Request exceeds max request size (%lu bytes).",
      (unsigned long)VAR_3->size + VAR_6);
     FUNC_0(VAR_3);
     return -1;
 }
 VAR_5 = FUNC_3 (VAR_3->buf, VAR_3->size + VAR_6);
 if (VAR_5 == ((void*)0)) {
     FUNC_1(VAR_1, VAR_2, 0, "Failed to re-allocate %lu bytes.",
      (unsigned long)VAR_3->size + VAR_6);
     FUNC_0(VAR_3);
     return -1;
 }
 VAR_3->size += VAR_6;
 VAR_3->buf = VAR_5;
    }
    return 0;
}
