
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


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
 int FUNC_12 (int) ;

int
FUNC_13 (int VAR_3, char **VAR_4)
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
 { "෴ණ්ණ෴෴ණ්ණ෴", "Mick",
   "෴ණ්ණ෴෴ණ්ණ෴෴ණ්ණ෴෴෴", 110, 20 },
 { ((void*)0), ((void*)0) }
    }, *VAR_6 = VAR_5;
    int VAR_7, VAR_8;

    VAR_3 = FUNC_9(VAR_3, VAR_4);
    if (VAR_3 < 0)
 return 1;

    FUNC_11(((void*)0), VAR_1, VAR_2);
    FUNC_10(((void*)0), VAR_0);

    FUNC_6("indian-languages");

    FUNC_4("{T:Sample text}\n");
    FUNC_4("This sample text was taken from the Punjabi Wikipedia "
     "article on Lahore and transliterated into the Latin script.\n");

    FUNC_4("{T:Gurmukhi:}\n");
    FUNC_4("{:gurmukhi}\n",
     "ਲਹੌਰ ਪਾਕਿਸਤਾਨੀ ਪੰਜਾਬ ਦੀ ਰਾਜਧਾਨੀ ਹੈ । ਲੋਕ ਗਿਣਤੀ ਦੇ ਨਾਲ ਕਰਾਚੀ ਤੋਂ ਬਾਅਦ ਲਹੌਰ ਦੂਜਾ ਸਭ ਤੋਂ ਵੱਡਾ ਸ਼ਹਿਰ ਹੈ । ਲਹੌਰ ਪਾਕਿਸਤਾਨ ਦਾ ਸਿਆਸੀ, ਰਹਤਲੀ ਤੇ ਪੜ੍ਹਾਈ ਦਾ ਗੜ੍ਹ ਹੈ ਅਤੇ ਇਸ ਲਈ ਇਹਨੂੰ ਪਾਕਿਸਤਾਨ ਦਾ ਦਿਲ ਵੀ ਕਿਹਾ ਜਾਂਦਾ ਹੈ । ਲਹੌਰ ਦਰਿਆ-ਏ-ਰਾਵੀ ਦੇ ਕੰਢੇ ਤੇ ਵਸਦਾ ਹੈ ਤੇ ਇਸਦੀ ਲੋਕ ਗਿਣਤੀ ਇੱਕ ਕਰੋੜ ਦੇ ਨੇੜੇ ਹੈ ।");


    FUNC_4("{T:Shahmukhi:}\n");
    FUNC_4("{:shahmukhi}\n",
     "لہور پاکستانی پنجاب دا دارالحکومت اے۔ لوک گنتی دے نال کراچی توں بعد لہور دوجا سبھ توں وڈا شہر اے۔ لہور پاکستان دا سیاسی، رہتلی تے پڑھائی دا گڑھ اے تے اس لئی ایھنوں پاکستان دا دل وی کیھا جاندا اے۔ لہور دریاۓ راوی دے کنڈھے تے وسدا اے اسدی لوک گنتی اک کروڑ دے نیڑے اے ۔");

    FUNC_4("{T:Transliteration}:\n");
    FUNC_4("{:tranliteration}\n",
     "lahor pākistān panjāb dā dārul hakūmat ē. lōk giṇtī dē nāḷ karācī tō᷈ bāad lahor dūjā sab tō᷈ vaḍḍā shahr ē. lahor pākistān dā siāsī, rahtalī tē paṛā̀ī dā gā́ṛ ē tē is laī ihnū᷈ pākistān dā dil vī kehā jāndā ē. lahor dariāē rāvī dē kanḍē tē vasdā ē. isdī lōk giṇtī ikk karōṛ dē nēṛē ē.");

    FUNC_1("indian-languages");

    FUNC_6("employees");

    wchar_t VAR_9[] = { L'෴', L'ණ', L'්', L'ණ', 0x17D2, L'෴', 0 };
    for (VAR_8 = 0; VAR_9[VAR_8]; VAR_8++)
 FUNC_4("Wide char: {lq:wc/%lc - %#lx - %d}\n",
  VAR_9[VAR_8], (unsigned long) VAR_9[VAR_8], FUNC_12(VAR_9[VAR_8]));

    wchar_t VAR_10[] = { L'1', 0x034f, L'2', 0x20dd, 0 };
    for (VAR_8 = 0; VAR_10[VAR_8]; VAR_8++)
 FUNC_4("Wide char: {lq:wc/%lc - %#lx - %d}\n",
  VAR_10[VAR_8], (unsigned long) VAR_10[VAR_8], FUNC_12((int) VAR_10[VAR_8]));
    FUNC_4("Cool: [{:fancy/%ls}]\n", VAR_10);

    FUNC_4("Οὐχὶ ταὐτὰ παρίσταταί μοι {:v1/%s}, {:v2/%s}\n",
     "γιγνώσκειν", "ὦ ἄνδρες ᾿Αθηναῖοι");

    VAR_7 = FUNC_4("გთხოვთ {:v1/%s} {:v2/%s}\n",
     "ახლავე გაიაროთ რეგისტრაცია",
     "Unicode-ის მეათე საერთაშორისო");
    FUNC_4("{Twc:Width}{:width/%d}\n", VAR_7);


    VAR_7 = FUNC_4("[{:sinhala}]\n", "෴ණ්ණ෴");
    FUNC_4("{Twc:Width}{:width/%d}\n", VAR_7);

    VAR_7 = FUNC_4("[{:sinhala}]\n", "෴");
    FUNC_4("{Twc:Width}{:width/%d}\n", VAR_7);

    VAR_7 = FUNC_4("[{:sinhala/%-4..4s/%s}]\n", "෴ණ්ණ෴෴ණ්ණ෴");
    FUNC_4("{Twc:Width}{:width/%d}\n", VAR_7);

    FUNC_4("[{:not-sinhala/%-4..4s/%s}]\n", "123456");

    VAR_7 = FUNC_4("[{:tag/%s}]\n", "ර්‍ඝ");
    FUNC_4("{Twc:Width}{:width/%d}\n", VAR_7);

    FUNC_8("employee");

    FUNC_4("{T:First Name/%-25s}{T:Last Name/%-14s}"
     "{T:/%-12s}{T:Time (%)}\n", "Department");
    for ( ; VAR_6->e_first; VAR_6++) {
 FUNC_7("employee");
 FUNC_4("{[:-25}{:first-name/%s} ({:nic-name/\"%s\"}){]:}"
  "{:last-name/%-14..14s/%s}"
  "{:department/%8u}{:percent-time/%8u}\n",
  VAR_6->e_first, VAR_6->e_nic, VAR_6->e_last, VAR_6->e_dept, VAR_6->e_percent);
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
