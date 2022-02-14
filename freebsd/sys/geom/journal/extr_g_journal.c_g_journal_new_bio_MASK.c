
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bio {void* bio_length; int * bio_data; int bio_done; int bio_cmd; void* bio_joffset; void* bio_offset; } ;
typedef void* off_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void*) ;
 struct bio* FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (void*,int) ;

__attribute__((used)) static struct bio *
FUNC_3(off_t VAR_2, off_t VAR_3, off_t VAR_4, u_char *VAR_5,
    int VAR_6)
{
 struct bio *VAR_7;

 VAR_7 = FUNC_1();
 VAR_7->bio_offset = VAR_2;
 VAR_7->bio_joffset = VAR_4;
 VAR_7->bio_length = VAR_3 - VAR_2;
 VAR_7->bio_cmd = VAR_0;
 VAR_7->bio_done = VAR_1;
 if (VAR_5 == ((void*)0))
  VAR_7->bio_data = ((void*)0);
 else {
  VAR_7->bio_data = FUNC_2(VAR_7->bio_length, VAR_6);
  if (VAR_7->bio_data != ((void*)0))
   FUNC_0(VAR_5, VAR_7->bio_data, VAR_7->bio_length);
 }
 return (VAR_7);
}
