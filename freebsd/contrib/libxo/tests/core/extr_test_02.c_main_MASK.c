
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char**) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (char*,char*) ;

int
FUNC_17 (int VAR_9, char **VAR_10)
{
    VAR_9 = FUNC_12(VAR_9, VAR_10);
    if (VAR_9 < 0)
 return 1;

    for (VAR_9 = 1; VAR_10[VAR_9]; VAR_9++) {
 if (FUNC_16(VAR_10[VAR_9], "xml"))
     FUNC_15(((void*)0), VAR_7);
 else if (FUNC_16(VAR_10[VAR_9], "json"))
     FUNC_15(((void*)0), VAR_5);
 else if (FUNC_16(VAR_10[VAR_9], "text"))
     FUNC_15(((void*)0), VAR_6);
 else if (FUNC_16(VAR_10[VAR_9], "html"))
     FUNC_15(((void*)0), VAR_4);
 else if (FUNC_16(VAR_10[VAR_9], "pretty"))
     FUNC_14(((void*)0), VAR_1);
 else if (FUNC_16(VAR_10[VAR_9], "xpath"))
     FUNC_14(((void*)0), VAR_3);
 else if (FUNC_16(VAR_10[VAR_9], "info"))
     FUNC_14(((void*)0), VAR_0);
    }

    FUNC_14(((void*)0), VAR_2);
    FUNC_13(VAR_8);

    FUNC_10(((void*)0), "top");

    FUNC_9("data");

    FUNC_4("{kt:name/%-*.*s}{eq:flags/0x%x}",
     5, 5, "em0", 34883);

    FUNC_4("{d:/%-*.*s}{etk:name}{eq:flags/0x%x}",
     5, 5, "em0", "em0", 34883);

    FUNC_4("We are {{emit}}{{ting}} some {:what}\n", "braces");

    FUNC_7("abcdef");
    FUNC_0(-1);
    FUNC_8("abcdef");

    FUNC_7("improper use of profanity; %s; %s",
        "ten yard penalty", "first down");

    FUNC_4("length {:length/%6.6s}\n", "abcdefghijklmnopqrstuvwxyz");

    FUNC_0(-1);
    FUNC_4("close {:fd/%d} returned {:error/%m} {:test}\n", -1, "good");
    FUNC_0(-1);
    FUNC_4("close {:fd/%d} returned {:error/%6.6m} {:test}\n", -1, "good");


    FUNC_7("improper use of profanity; %s; %s",
        "ten yard penalty", "first down");

    FUNC_4(" {:lines/%7ju} {:words/%7ju} "
            "{:characters/%7ju} {d:filename/%s}\n",
            (uintmax_t) 20, (uintmax_t) 30, (uintmax_t) 40, "file");

    int VAR_11;
    for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
 FUNC_4("{lw:bytes/%d}{Np:byte,bytes}\n", VAR_11);


    FUNC_4("{:mbuf-current/%u}/{:mbuf-cache/%u}/{:mbuf-total/%u} "
     "{N:mbufs <&> in use (current\\/cache\\/total)}\n",
     10, 20, 30);

    FUNC_4("{:distance/%u}{Uw:miles} from {:location}\n", 50, "Boston");
    FUNC_4("{:memory/%u}{U:k} left out of {:total/%u}{U:kb}\n", 64, 640);
    FUNC_4("{:memory/%u}{U:/%s} left out of {:total/%u}{U:/%s}\n",
     64, "k", 640, "kilobytes");

    FUNC_4("{,title:/before%safter:}\n", "working");

    FUNC_4("{,display,white,colon:some/%s}"
     "{,value:ten/%ju}{,value:eleven/%ju}\n",
     "string", (uintmax_t) 10, (uintmax_t) 11);

    FUNC_4("{:unknown/%u} "
     "{N:/packet%s here\\/there\\/everywhere}\n",
     1010, "s");

    FUNC_4("{:unknown/%u} "
     "{,note:/packet%s here\\/there\\/everywhere}\n",
     1010, "s");

    FUNC_4("({[:/%d}{n:min/15}/{n:cur/20}/{:max/%d}{]:})\n", 30, 125);
    FUNC_4("({[:30}{:min/%u}/{:cur/%u}/{:max/%u}{]:})\n", 15, 20, 125);
    FUNC_4("({[:-30}{n:min/15}/{n:cur/20}/{n:max/125}{]:})\n");
    FUNC_4("({[:}{:min/%u}/{:cur/%u}/{:max/%u}{]:/%d})\n", 15, 20, 125, -30);

    FUNC_4("Humanize: {h:val1/%u}, {h,hn-space:val2/%u}, "
     "{h,hn-decimal:val3/%u}, {h,hn-1000:val4/%u}, "
     "{h,hn-decimal:val5/%u}\n",
            21,
     57 * 1024,
     96 * 1024 * 1024,
     (42 * 1024 + 420) * 1024,
     1342172800);

    FUNC_11("flag");
    FUNC_4("{lq:flag/one} {lq:flag/two} {lq:flag/three}\n");
    FUNC_3("flag");

    FUNC_4("{n:works/%s}\n", ((void*)0));

    FUNC_4("{e:empty-tag/}");
    FUNC_4("1:{qt:t1/%*d} 2:{qt:t2/test%-*u} "
     "3:{qt:t3/%10sx} 4:{qt:t4/x%-*.*s}\n",
     6, 1000, 8, 5000, "ten-long", 10, 10, "test");
    FUNC_4("{E:this is an error}\n");
    FUNC_4("{E:/%s more error%s}\n", "two", "s" );
    FUNC_4("{W:this is an warning}\n");
    FUNC_4("{W:/%s more warning%s}\n", "two", "s" );
    FUNC_4("{L:/V1\\/V2 packet%s}: {:count/%u}\n", "s", 10);

    int VAR_12 = 4;
    FUNC_4("{:test/%04d} {L:/tr%s}\n", VAR_12, (VAR_12 == 1) ? "y" : "ies");

    FUNC_7("improper use of profanity; %s; %s",
        "ten yard penalty", "first down");

    FUNC_5("Shut 'er down, Clancey!  She's a-pumpin' mud!  <>!,\"!<>\n");

    FUNC_1("data");

    FUNC_2(((void*)0), "top");

    FUNC_6();

    return 0;
}
