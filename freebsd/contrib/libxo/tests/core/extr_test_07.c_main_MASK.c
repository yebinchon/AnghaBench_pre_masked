
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ) ;

int
FUNC_12 (int VAR_3, char **VAR_4)
{
    struct employee {
 const char *e_first;
 const char *e_nic;
 const char *e_last;
 unsigned e_dept;
 unsigned e_percent;
    } VAR_5[] = {
 { "Jim", "რეგტ", "გთხოვთ ახ", 431, 90 },
 { "Terry", "<one", "Οὐχὶ ταὐτὰ παρίσταταί μοι Jones", 660, 90 },
 { "Leslie", "Les", "Patterson", 341,60 },
 { "Ashley", "Ash", "Meter & Smith", 1440, 40 },
 { "0123456789", "0123456789", "012345678901234567890", 1440, 40 },
 { "ახლა", "გაიარო", "საერთაშორისო", 123, 90 },
 { ((void*)0), ((void*)0) }
    }, *VAR_6 = VAR_5;
    int VAR_7;

    VAR_3 = FUNC_9(VAR_3, VAR_4);
    if (VAR_3 < 0)
 return 1;

    FUNC_11(((void*)0), VAR_1, VAR_2);
    FUNC_10(((void*)0), VAR_0);

    FUNC_6("employees");

    FUNC_8("test");
    FUNC_7("test");
    FUNC_4("{ek:filename/%s}", ((void*)0));
    FUNC_2("test");
    FUNC_3("test");

    VAR_7 = FUNC_4("Οὐχὶ ταὐτὰ παρίσταταί μοι {:v1/%s}, {:v2/%s}\n",
     "γιγνώσκειν", "ὦ ἄνδρες ᾿Αθηναῖοι");
    VAR_7 = FUNC_4("{:columns/%d}\n", VAR_7);
    FUNC_4("{:columns/%d}\n", VAR_7);

    VAR_7 = FUNC_4("გთხოვთ {:v1/%s} {:v2/%s}\n",
     "ახლავე გაიაროთ რეგისტრაცია",
     "Unicode-ის მეათე საერთაშორისო");
    FUNC_4("{:columns/%d}\n", VAR_7);


    VAR_7 = FUNC_4("{T:First Name/%-25s}{T:Last Name/%-14s}"
     "{T:/%-12s}{T:Time (%)}\n", "Department");
    FUNC_4("{:columns/%d}\n", VAR_7);

    FUNC_8("employee");
    for ( ; VAR_6->e_first; VAR_6++) {
 FUNC_7("employee");
 VAR_7 = FUNC_4("{[:-25}{:first-name/%s} ({:nic-name/\"%s\"}){]:}"
  "{:last-name/%-14..14s/%s}"
  "{:department/%8u/%u}{:percent-time/%8u/%u}\n",
  VAR_6->e_first, VAR_6->e_nic, VAR_6->e_last, VAR_6->e_dept, VAR_6->e_percent);
 FUNC_4("{:columns/%d}\n", VAR_7);
 if (VAR_6->e_percent > 50) {
     FUNC_0("full-time", "%s", "honest & for true");
     FUNC_4("{e:benefits/%s}", "full");
 }
 FUNC_2("employee");
    }

    FUNC_3("employee");
    FUNC_1("employees");

    FUNC_5();

    return 0;
}
