
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* hx509_pem_read_func ) (int ,char*,int *,void*,size_t,void*) ;
typedef int hx509_pem_header ;
typedef int hx509_context ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int) ;
 void* FUNC_3 (void*,size_t) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int **,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int ,char*,int *,void*,size_t,void*) ;

int
FUNC_16(hx509_context VAR_1,
        FILE *VAR_2,
        hx509_pem_read_func VAR_3,
        void *VAR_4)
{
    hx509_pem_header *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    void *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    char VAR_9[1024];
    int VAR_10 = VAR_0;

    enum { BEFORE, SEARCHHEADER, INHEADER, INDATA, DONE } VAR_11;

    VAR_11 = BEFORE;

    while (FUNC_4(VAR_9, sizeof(VAR_9), VAR_2) != ((void*)0)) {
 char *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_12(VAR_9, "\n");
 if (VAR_9[VAR_13] == '\n') {
     VAR_9[VAR_13] = '\0';
     if (VAR_13 > 0)
  VAR_13--;
 }
 if (VAR_9[VAR_13] == '\r') {
     VAR_9[VAR_13] = '\0';
     if (VAR_13 > 0)
  VAR_13--;
 }

 switch (VAR_11) {
 case BEFORE:
     if (FUNC_14("-----BEGIN ", VAR_9, 11) == 0) {
  VAR_6 = FUNC_13(VAR_9 + 11);
  if (VAR_6 == ((void*)0))
      break;
  VAR_12 = FUNC_11(VAR_6, '-');
  if (VAR_12)
      *VAR_12 = '\0';
  VAR_11 = SEARCHHEADER;
     }
     break;
 case SEARCHHEADER:
     VAR_12 = FUNC_11(VAR_9, ':');
     if (VAR_12 == ((void*)0)) {
  VAR_11 = INDATA;
  goto indata;
     }

 case INHEADER:
     if (VAR_9[0] == '\0') {
  VAR_11 = INDATA;
  break;
     }
     VAR_12 = FUNC_11(VAR_9, ':');
     if (VAR_12) {
  *VAR_12++ = '\0';
  while (FUNC_9((int)*VAR_12))
      VAR_12++;
  VAR_10 = FUNC_6(&VAR_5, VAR_9, VAR_12);
  if (VAR_10)
      FUNC_0();
     }
     break;
 case INDATA:
 indata:

     if (FUNC_14("-----END ", VAR_9, 9) == 0) {
  VAR_11 = DONE;
  break;
     }

     VAR_12 = FUNC_2(VAR_13);
     VAR_13 = FUNC_1(VAR_9, VAR_12);
     if (VAR_13 < 0) {
  FUNC_5(VAR_12);
  goto out;
     }

     VAR_7 = FUNC_3(VAR_7, VAR_8 + VAR_13);
     FUNC_10(((char *)VAR_7) + VAR_8, VAR_12, VAR_13);
     FUNC_5(VAR_12);
     VAR_8 += VAR_13;
     break;
 case DONE:
     FUNC_0();
 }

 if (VAR_11 == DONE) {
     VAR_10 = (*VAR_3)(VAR_1, VAR_6, VAR_5, VAR_7, VAR_8, VAR_4);
 out:
     FUNC_5(VAR_7);
     VAR_7 = ((void*)0);
     VAR_8 = 0;
     FUNC_5(VAR_6);
     VAR_6 = ((void*)0);
     VAR_11 = BEFORE;
     FUNC_7(VAR_5);
     VAR_5 = ((void*)0);
     if (VAR_10)
  break;
 }
    }

    if (VAR_11 != BEFORE) {
 FUNC_8(VAR_1, 0, VAR_0,
          "File ends before end of PEM end tag");
 VAR_10 = VAR_0;
    }
    if (VAR_7)
 FUNC_5(VAR_7);
    if (VAR_6)
 FUNC_5(VAR_6);
    if (VAR_5)
 FUNC_7(VAR_5);

    return VAR_10;
}
