
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {size_t central_directory_bytes; struct cd_segment* central_directory_last; struct cd_segment* central_directory; } ;
struct cd_segment {scalar_t__ p; scalar_t__ buff; scalar_t__ buff_size; struct cd_segment* next; } ;


 struct cd_segment* FUNC_0 (int,int) ;
 int FUNC_1 (struct cd_segment*) ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static unsigned char *
FUNC_3(struct zip *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2;

 if (VAR_0->central_directory == ((void*)0)
     || (VAR_0->central_directory_last->p + VAR_1
  > VAR_0->central_directory_last->buff + VAR_0->central_directory_last->buff_size)) {
  struct cd_segment *VAR_3 = FUNC_0(1, sizeof(*VAR_3));
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  VAR_3->buff_size = 64 * 1024;
  VAR_3->buff = FUNC_2(VAR_3->buff_size);
  if (VAR_3->buff == ((void*)0)) {
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  VAR_3->p = VAR_3->buff;

  if (VAR_0->central_directory == ((void*)0)) {
   VAR_0->central_directory
       = VAR_0->central_directory_last
       = VAR_3;
  } else {
   VAR_0->central_directory_last->next = VAR_3;
   VAR_0->central_directory_last = VAR_3;
  }
 }

 VAR_2 = VAR_0->central_directory_last->p;
 VAR_0->central_directory_last->p += VAR_1;
 VAR_0->central_directory_bytes += VAR_1;
 return (VAR_2);
}
