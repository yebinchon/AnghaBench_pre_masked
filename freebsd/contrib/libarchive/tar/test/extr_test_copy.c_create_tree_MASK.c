
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 char** VAR_0 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_13(void)
{
 char VAR_1[260];
 char VAR_2[260];
 int VAR_3;
 int VAR_4;

 FUNC_8();


 if (!FUNC_6()) {
  FUNC_11("Symlink checks");
 }

 FUNC_2("original", 0775);
 FUNC_1(0, FUNC_7("original"));
 VAR_4 = FUNC_9();

 FUNC_2("f", 0775);
 FUNC_2("l", 0775);
 FUNC_2("m", 0775);
 FUNC_2("s", 0775);
 FUNC_2("d", 0775);

 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {
  FUNC_10("Internal sanity check failed: i = %d", VAR_3);
  FUNC_0(VAR_0[VAR_3] != ((void*)0));

  FUNC_12(VAR_1, "f/%s", VAR_0[VAR_3]);
  FUNC_3(VAR_1, 0777, VAR_1);


  FUNC_12(VAR_2, "l/%s", VAR_0[VAR_3]);
  FUNC_4(VAR_2, VAR_1);


  FUNC_12(VAR_2, "m/%s", VAR_0[VAR_3]);
  FUNC_4(VAR_2, VAR_1);

  if (FUNC_6()) {

   FUNC_12(VAR_1, "s/%s", VAR_0[VAR_3]);
   FUNC_12(VAR_2, "../f/%s", VAR_0[VAR_3]);
   FUNC_10("buff=\"%s\" buff2=\"%s\"", VAR_1, VAR_2);
   FUNC_5(VAR_1, VAR_2, 0);
  }

  VAR_1[0] = 'd';
  FUNC_10("buff=\"%s\"", VAR_1);
  FUNC_2(VAR_1, 0775);
 }

 FUNC_1(0, FUNC_7(".."));
}
