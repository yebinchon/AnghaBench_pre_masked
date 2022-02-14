
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_iov {size_t allocated_size; scalar_t__ credit; char* base; size_t len; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t,int ,int) ;

void
FUNC_4(struct fuse_iov *VAR_5, size_t VAR_6)
{
 if (VAR_5->allocated_size < VAR_6 ||
     (VAR_4 >= 0 &&
     VAR_5->allocated_size - VAR_6 > VAR_4 &&
     --VAR_5->credit < 0)) {

  VAR_5->base = FUNC_3(VAR_5->base, FUNC_0(VAR_6), VAR_0,
      VAR_1 | VAR_2);
  if (!VAR_5->base) {
   FUNC_2("FUSE: realloc failed");
  }
  VAR_5->allocated_size = FUNC_0(VAR_6);
  VAR_5->credit = VAR_3;

  FUNC_1(VAR_5->base, VAR_6);
 } else if (VAR_6 > VAR_5->len) {

  FUNC_1((char*)VAR_5->base + VAR_5->len, VAR_6 - VAR_5->len);
 }
 VAR_5->len = VAR_6;
}
