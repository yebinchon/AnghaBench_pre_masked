
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tchar ;
struct stat {size_t st_size; int st_mode; } ;
typedef int _EXPAT_read_req_t ;
typedef scalar_t__ _EXPAT_read_count_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (int,void*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (int ,int ,int const*) ;
 void* FUNC_7 (size_t) ;
 int VAR_3 ;
 int FUNC_8 (int const*,int) ;
 int FUNC_9 (int const*) ;

int
FUNC_10(const tchar *VAR_4,
        void (*VAR_5)(const void *, size_t, const tchar *, void *VAR_6),
        void *VAR_7)
{
  size_t VAR_8;
  int VAR_9;
  _EXPAT_read_count_t VAR_10;
  struct stat VAR_11;
  void *VAR_12;

  VAR_9 = FUNC_8(VAR_4, VAR_1|VAR_0);
  if (VAR_9 < 0) {
    FUNC_9(VAR_4);
    return 0;
  }
  if (FUNC_5(VAR_9, &VAR_11) < 0) {
    FUNC_9(VAR_4);
    FUNC_3(VAR_9);
    return 0;
  }
  if (!FUNC_0(VAR_11.st_mode)) {
    FUNC_6(VAR_3, FUNC_1("%s: not a regular file\n"), VAR_4);
    FUNC_3(VAR_9);
    return 0;
  }
  if (VAR_11.st_size > VAR_2) {
    FUNC_3(VAR_9);
    return 2;
  }

  VAR_8 = VAR_11.st_size;

  if (VAR_8 == 0) {
    static const char VAR_13 = '\0';
    VAR_5(&VAR_13, 0, VAR_4, VAR_7);
    FUNC_3(VAR_9);
    return 1;
  }
  VAR_12 = FUNC_7(VAR_8);
  if (!VAR_12) {
    FUNC_6(VAR_3, FUNC_1("%s: out of memory\n"), VAR_4);
    FUNC_3(VAR_9);
    return 0;
  }
  VAR_10 = FUNC_2(VAR_9, VAR_12, (_EXPAT_read_req_t)VAR_8);
  if (VAR_10 < 0) {
    FUNC_9(VAR_4);
    FUNC_4(VAR_12);
    FUNC_3(VAR_9);
    return 0;
  }
  if (VAR_10 != (_EXPAT_read_count_t)VAR_8) {
    FUNC_6(VAR_3, FUNC_1("%s: read unexpected number of bytes\n"), VAR_4);
    FUNC_4(VAR_12);
    FUNC_3(VAR_9);
    return 0;
  }
  VAR_5(VAR_12, VAR_8, VAR_4, VAR_7);
  FUNC_4(VAR_12);
  FUNC_3(VAR_9);
  return 1;
}
