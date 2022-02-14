
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int,struct msg_hdr*,int) ;
 scalar_t__ FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(int VAR_8, struct msg_hdr *VAR_9)
{
 char *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 FUNC_6("opening: ");
 FUNC_1(((void*)0));
 if (VAR_7 || VAR_6 > 0) {
  FUNC_6("cannot open another file\n");
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_12 = VAR_9->len - sizeof *VAR_9;
 VAR_10 = FUNC_3(VAR_12);
 if (!VAR_10) {
  FUNC_6("cannot allocate path name\n");
  VAR_11 = VAR_1;
  goto out;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_10, VAR_12);
 if (VAR_11 != VAR_12) {
  FUNC_6("error receiving path\n");
  goto out;
 }

 FUNC_6("%s, ", VAR_10);
 FUNC_1(((void*)0));
 VAR_6 = FUNC_5(VAR_10, VAR_3 | VAR_2 | VAR_4, VAR_9->data);
 if (VAR_6 < 0) {
  FUNC_6("unable to open destination file\n");
  VAR_11 = VAR_5;
 }

 VAR_11 = 0;
out:
 if (VAR_10)
  FUNC_2(VAR_10);

 FUNC_4(VAR_8, VAR_9, VAR_11);
 return VAR_11;
}
